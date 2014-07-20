#pragma once

#include "windows/Window.hpp"

namespace vulture{
    class WindowEvent{
    public:
        class Shown;
        enum class Type : uint32_t{ Shown };
        union Event;

        Type type() const;
    protected:
        Type _type;
    };

    class WindowEvent::Shown{
    };

    union WindowEvent::Event{
        Shown shown;
    };
}
