#include "windows/EventsPoller.hpp"

namespace vulture{
    namespace windows{
        void
        EventsPoller::registerWindow(std::weak_ptr<Window> window){
            uint32_t id = window.lock().get()->ID();
            windows_container[id] = window;
        }

        void
        EventsPoller::unregisterWindow(uint32_t id){
            windows_container.erase(id);
        }

        bool
        EventsPoller::windowRegistered(uint32_t id) const{
            return windows_container.find(id) != windows_container.end();
        }

        void
        EventsPoller::callWindowEventHandler(const windows::Event &we, uint32_t id){
            if(!windowRegistered(id))
                return;
            auto windowptr = windows_container[id];
            if(windowptr.expired()){
                unregisterWindow(id);
                return;
            }
            auto &window = *windowptr.lock();
            if(window.closed()){
                unregisterWindow(id);
                return;
            }

            switch(we.type()){
            case Event::Type::Shown:
                window.onShown(we.events().shown);
                break;
            case Event::Type::Exposed:
                window.onExposed(we.events().exposed);
                break;
            case Event::Type::Moved:
                window.onMoved(we.events().moved);
                break;
            case Event::Type::Resized:
                window.onResized(we.events().resized);
                break;
            case Event::Type::Minimized:
                window.onMinimized(we.events().minimized);
                break;
            case Event::Type::Maximized:
                window.onMaximized(we.events().maximized);
                break;
            case Event::Type::Restored:
                window.onRestored(we.events().restored);
                break;
            case Event::Type::Closed:
                window.onClosed(we.events().closed);
            }
        }
    }
}
