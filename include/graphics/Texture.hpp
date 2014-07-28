#pragma once

#include "Color.hpp"
#include "Vector2.hpp"
#include "Size.hpp"

#include <string>
#include <memory>
#include <set>

namespace vulture{
    namespace graphics{
        class Texture{
        public:
            Texture(const Color &);
            virtual void load(const std::string &) = 0;

            virtual const std::set<std::string> &supportedFormats() const = 0;

            virtual const Color &color() const;
            virtual void color(const Color &);

            virtual const Size size() const = 0;
        protected:
            Color _color;
        };
    }
}
