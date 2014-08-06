#include "windows/EventsCaller.hpp"

using namespace vulture::events;
using namespace std;

#define VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(name, lowercasename) \
    EventsCaller:: name##Filter:: name##Filter( \
        list<weak_ptr<Window>> &windows \
    ): windows:: name##Filter(), _windows(windows){} \
    bool \
    EventsCaller:: name##Filter::filter(const Event &event){ \
        if(!windows:: name##Filter::filter(event)) return false; \
        for(auto it = _windows.begin(); it != _windows.end(); ++it) \
            if(it->expired()) \
                _windows.erase(it); \
            else if(event.events().window.windowID() == it->lock()->ID()){ \
                it->lock()->on##name (event.events().window.events(). lowercasename); \
                return true; \
            } \
        return false; \
    }

namespace vulture{
    namespace windows{
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Shown, shown);
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Exposed, exposed);
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Moved, moved);
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Resized, resized);
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Minimized, minimized);
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Maximized, maximized);
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Restored, restored);
        VULTURE_WINDOWS_DECLARE_INJECTED_WINDOWS_LIST_FILTER(Closed, closed);

        EventsCaller::EventsCaller(
            shared_ptr<System> system
        ): _system(system){
            _filtersGroup
                .add(make_shared<ShownFilter>(_windows))
                .add(make_shared<ExposedFilter>(_windows))
                .add(make_shared<MovedFilter>(_windows))
                .add(make_shared<ResizedFilter>(_windows))
                .add(make_shared<MinimizedFilter>(_windows))
                .add(make_shared<MaximizedFilter>(_windows))
                .add(make_shared<RestoredFilter>(_windows))
                .add(make_shared<ClosedFilter>(_windows));
        }

        EventsCaller &
        EventsCaller::add(std::weak_ptr<Window> window){
            _windows.push_back(window);
            return *this;
        }


    }
}
