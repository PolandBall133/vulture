#pragma once

#include "Color.hpp"
#include "windows/Window.hpp"
#include "Rectangle.hpp"
#include "Vector2.hpp"
#include "Size.hpp"

#include <memory>

namespace vulture{
    class Renderer{
    public:
        Renderer(std::weak_ptr<windows::Window>);

        virtual void clear() = 0;
        virtual void present() = 0;
        virtual void drawingColor(const Color &) = 0;

        virtual const Rectangle viewPort() const = 0;
        virtual void viewPort(const Rectangle &) = 0;

        virtual const Vector2 scale() const = 0;
        virtual void scale(const Vector2 &) = 0;

        virtual const Size logicalSize() const = 0;
        virtual void logicalSize(const Size &) = 0;
    };
}
