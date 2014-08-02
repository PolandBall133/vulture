#pragma once

#include <cinttypes>

namespace vulture{
    namespace input{
        namespace devices{
            class Device{
                virtual uint32_t ID() const = 0;
            };
        }
    }
}
