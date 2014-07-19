#pragma once

#include "windows/Window.hpp"

namespace vulture{
    class WindowEvent{
    public:
        class Shown{};
        enum class Type : uint32_t{ Shown };

        Type type() const;
        union Event{
            Shown shown;
        };
    protected:
        Type _type;
    };
}
