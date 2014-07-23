#include "windows/EventsPoller.hpp"

namespace vulture{
    namespace window{
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
        EventsPoller::callWindowEventHandler(const WindowEvent &we, uint32_t id){
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
            case WindowEvent::Type::Shown:
                window.onShown(we.event().shown);
                break;
            case WindowEvent::Type::Exposed:
                window.onExposed(we.event().exposed);
                break;
            case WindowEvent::Type::Moved:
                window.onMoved(we.event().moved);
                break;
            case WindowEvent::Type::Resized:
                window.onResized(we.event().resized);
                break;
            case WindowEvent::Type::Minimized:
                window.onMinimized(we.event().minimized);
                break;
            case WindowEvent::Type::Maximized:
                window.onMaximized(we.event().maximized);
                break;
            case WindowEvent::Type::Restored:
                window.onRestored(we.event().restored);
                break;
            case WindowEvent::Type::Closed:
                window.onClosed(we.event().closed);
            }
        }
    }
}
