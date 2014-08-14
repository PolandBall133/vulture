#pragma once

#include "util/Point.hpp"

namespace vulture{
    namespace events{
        class MouseEvent{
        public:
            struct Button{
                enum Type{
                    Up,
                    Down
                } type;
                uint8_t which;
                uint8_t clicks;
            };

            struct Motion{
                Point position;
                Point relativePosition;
            };

            struct Wheel{
                Point scrolled;
            };

            enum class Type{
                Button,
                Motion,
                Wheel
            } type;

            union Events{
                Button button;
                Motion motion;
                Wheel wheel;
            } events;
        };
    }
}
