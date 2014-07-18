#pragma once

#include "Color.hpp"
#include "Window.hpp"

namespace vulture{
    class Renderer{
    public:
        Renderer(std::weak_ptr<Window>);
        virtual void clear() = 0;
        virtual void present() = 0;
        virtual void drawingColor(const Color &) = 0;
    };
}
