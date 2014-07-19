#pragma once

#include "windows/Window.hpp"

namespace vulture{
    class WindowEvent{
    public:
        enum Type : uint32_t {};

        Type type() const;
    protected:
        Type _type;
    };
}
