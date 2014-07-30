#pragma once

#include "util/Color.hpp"
#include "util/Vector2.hpp"
#include "util/Size.hpp"

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

            virtual const Size &size() const;
        protected:
            virtual void size(const Size &);
        private:
            Color _color;
            Size _size;
        };
    }
}
