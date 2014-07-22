#include "windows/WindowEventsPoller.hpp"

namespace vulture{
    void
    WindowEventsPoller::registerWindow(std::weak_ptr<Window> window){
        uint32_t id = window.lock().get()->ID();
        windows_container[id] = window;
    }

    void
    WindowEventsPoller::callWindowEventHandler(const WindowEvent &we, uint32_t id){
        if(isWindowExpired(id)){
            unregisterWindow(id);
            return;
        }
        Window &window = *windows_container[id].lock().get();
        callSpecifiedWindowEventHandler(we, window);
    }

    bool
    WindowEventsPoller::isWindowExpired(uint32_t id) const{
        return windows_container.at(id).expired();
    }

    void
    WindowEventsPoller::unregisterWindow(uint32_t id){
        windows_container.erase(id);
    }

    void
    WindowEventsPoller::callSpecifiedWindowEventHandler(const WindowEvent &we, Window &window){
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