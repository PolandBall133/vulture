#pragma once

namespace vulture{
    namespace input{
        class Device{
            virtual uint32_t ID() const = 0;
        };
    }
}
