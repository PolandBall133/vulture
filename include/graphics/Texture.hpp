#pragma once

#include "Color.hpp"
#include "Vector2.hpp"
#include "Size.hpp"

#include <string>
#include <memory>

namespace vulture{
    namespace graphics{
        class Texture{
        public:
            void load(Renderer &, const std::string &) = 0;
            const Color &color() const;
            void color(const Color &) = 0;
        protected:
            Color _color;
        };
    }
}
