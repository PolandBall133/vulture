#pragma once

#include "Color.hpp"
#include "Vector2.hpp"
#include "Point.hpp"
#include "Rectangle.hpp"
#include "graphics/Texture.hpp"

namespace vulture{
    namespace graphics{
        template<class TextureType>
        class SpriteBatch{
        protected:
            class Drawer{
            public:
                virtual void texture(
                    TextureType &,
                    const Rectangle &,
                    const Rectangle &,
                    double = 0.0,
                    const Point = Point::zero()
                ) = 0;

                virtual void texture(
                    TextureType &,
                    const Point &,
                    double = 0.0,
                    const Point = Point::zero()
                ) = 0;

                virtual void quad(
                    const Rectangle &,
                    const Color &
                ) = 0;

                virtual void line(
                    const Point &,
                    const Point &,
                    const Color &
                ) = 0;
            };
        public:
            virtual void begin() = 0;
            virtual void end() = 0;
            virtual const Color backgroundColor() const = 0;
            virtual void backgroundColor(const Color &) = 0;

            virtual Drawer &draw() = 0;
        };
    }
}
