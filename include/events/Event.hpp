#pragma once
#include "events/WindowEvent.hpp"

namespace vulture{
    namespace events{
        struct Event{
            enum Type: uint32_t{
                Window,
            } type;
            union Events{
                Events(){}
                WindowEvent window;
            } events;
        };
    }
}
