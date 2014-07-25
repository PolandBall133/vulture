#pragma once

#include "Color.hpp"
#include "Vector2.hpp"
#include "Size.hpp"

#include "graphics/Renderer.hpp"

#include <string>
#include <memory>
#include <set>

namespace vulture{
    namespace graphics{
        template<class renderer_type>
        class Texture{
        public:
            Texture(){}
            virtual void load(renderer_type &, const std::string &) = 0;
            virtual const std::set<std::string> &supportedFormats() const = 0;
            virtual const Color &color() const;
            virtual void color(const Color &);
        protected:
            Color _color;
        };

        template<class T>
        const Color &
        Texture<T>::color() const{
            return _color;
        }

        template<class T>
        void
        Texture<T>::color(const Color &val){
            _color = val;
        }
    }
}
