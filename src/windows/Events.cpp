#include "windows/WindowEvents.hpp"

namespace vulture{
    WindowEvent::Type
    WindowEvent::type() const{
        return _type;
    }

    const WindowEvent::Event
    WindowEvent::event() const{
        return _event;
    }
}
