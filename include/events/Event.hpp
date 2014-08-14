#pragma once
#include "events/WindowEvent.hpp"
#include "events/MouseEvent.hpp"

namespace vulture{
    namespace events{
        struct Event{
            enum Type: uint32_t{
                Window,
                Mouse
            } type;
            union Events{
                WindowEvent window;
                MouseEvent mouse;
            } events;
        };
    }
}
