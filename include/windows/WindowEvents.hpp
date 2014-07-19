#pragma once

#include "windows/Window.hpp"

namespace vulture{
    class WindowEvent{
    public:
        enum Type : uint32_t {};

        Type type() const;
        union Event{ };
    protected:
        Type _type;
    };
}
