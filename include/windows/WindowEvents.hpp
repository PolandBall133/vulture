#pragma once

#include "windows/Window.hpp"

namespace vulture{
    class WindowEvent{
    public:
        enum Type : uint32_t {};

        Type type() const;
        union event{
        };
    protected:
        Type _type;
    };
}
