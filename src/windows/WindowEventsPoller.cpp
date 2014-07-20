#include "windows/WindowEventsPoller.hpp"

namespace vulture{
    void
    WindowEventsPoller::registerWindow(std::weak_ptr<Window> window){
        uint32_t id = window.lock().get()->ID();
        windows_container[id] = window;
    }
}
