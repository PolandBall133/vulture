#pragma once

#include "Color.hpp"

namespace vulture{
    namespace graphics{
        class SpriteBatch{
            virtual void begin() = 0;
            virtual void end() = 0;
            virtual const Color backgroundColor() const = 0;
            virtual void backgroundColor(const Color &) const = 0;

            struct Drawer;
            virtual Drawer &draw() = 0;
        };

        struct SpriteBatch::Drawer{

        };
    }
}