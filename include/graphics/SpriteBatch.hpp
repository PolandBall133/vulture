#pragma once

#include "Color.hpp"
#include "Vector2.hpp"
#include "Point.hpp"
#include "Rectangle.hpp"
#include "graphics/Texture.hpp"

namespace vulture{
    namespace graphics{
        class SpriteBatch{
        protected:
            struct Drawer;
        public:
            virtual void begin() = 0;
            virtual void end() = 0;
            virtual const Color backgroundColor() const = 0;
            virtual void backgroundColor(const Color &) = 0;

            virtual Drawer &draw() = 0;
        };

        struct SpriteBatch::Drawer{
            virtual void texture(
                graphics::Texture &,
                const Vector2 &,
                const Rectangle &,
                double = 0.0,
                const Point = Point::zero()
            ) = 0;

            virtual void texture(
                graphics::Texture &,
                const Vector2 &,
                double = 0.0,
                const Point = Point::zero()
            ) = 0;

            virtual void quad(
                const Rectangle &,
                const Color &
            ) = 0;

            /*virtual void point{
                const Point &,
                const Point &,
                const Color &
            } = 0;*/
        };
    }
}
