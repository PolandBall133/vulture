#pragma once

#include "Color.hpp"

namespace vulture{
    class Renderer{
    public:
        virtual void clear() = 0;
        virtual void present() = 0;
        virtual void drawingColor(const Color &) = 0;
    };
}
