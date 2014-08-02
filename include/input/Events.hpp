#pragma once
#include "input/devices/joy/Joy.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            class Event{
                enum class Type : uint32_t{
                    Joy
                };
                union Events{
                    joys::Joy joy;
                };
            };
        }
    }
}
