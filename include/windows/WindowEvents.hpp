#pragma once

#include "windows/Window.hpp"

namespace vulture{
    class WindowEvent{
    public:
        class Shown{};
        enum class Type : uint32_t{ Shown };
        union Event{
            Shown shown;
        };

        Type type() const;

    protected:
        Type _type;
    };
}
