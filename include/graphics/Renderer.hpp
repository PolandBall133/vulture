#pragma once

#include "util/Color.hpp"
#include "util/Rectangle.hpp"
#include "util/Vector2.hpp"
#include "util/Size.hpp"

namespace vulture{
    namespace graphics{
        class Renderer{
        public:
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
}
