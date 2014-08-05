#include "windows/EventsPoller.hpp"

namespace vulture{
    using namespace events;
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
                window.onShown();
                break;
            case WindowEvent::Type::Exposed:
                window.onExposed();
                break;
            case WindowEvent::Type::Moved:
                window.onMoved(we.events().moved);
                break;
            case WindowEvent::Type::Resized:
                window.onResized(we.events().resized);
                break;
            case WindowEvent::Type::Minimized:
                window.onMinimized();
                break;
            case WindowEvent::Type::Maximized:
                window.onMaximized();
                break;
            case WindowEvent::Type::Restored:
                window.onRestored();
                break;
            case WindowEvent::Type::Closed:
                window.onClosed();
            }
        }
    }
}
