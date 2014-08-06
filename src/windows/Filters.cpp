#include "windows/Filters.hpp"

#define VULTURE_WINDOWS_DEFINE_FILTER(name) \
    name##Filter:: name##Filter(): \
        Filter( "windows::" #name "Filter" ){} \
    bool name##Filter::filter(const Event &event){ \
        return event.events().window.type() == WindowEvent::Type:: name; \
    }

namespace vulture{
    using namespace events;
    namespace windows{
        FiltersGroup::FiltersGroup():
            events::FiltersGroup("windows::Filters"){}

        bool
        FiltersGroup::checkType(const Event &event){
            return event.type() == Event::Type::Window;
        }

        VULTURE_WINDOWS_DEFINE_FILTER(Shown);
        VULTURE_WINDOWS_DEFINE_FILTER(Exposed);
        VULTURE_WINDOWS_DEFINE_FILTER(Moved);
        VULTURE_WINDOWS_DEFINE_FILTER(Resized);
        VULTURE_WINDOWS_DEFINE_FILTER(Minimized);
        VULTURE_WINDOWS_DEFINE_FILTER(Maximized);
        VULTURE_WINDOWS_DEFINE_FILTER(Restored);
        VULTURE_WINDOWS_DEFINE_FILTER(Closed);
    }
}
