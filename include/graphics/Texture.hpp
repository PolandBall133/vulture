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
            Texture(std::weak_ptr<renderer_type> renderer):
                _renderer_handle(renderer),
                _color(0, 0, 0, 0){}
            virtual void load(const std::string &) = 0;
            virtual const std::set<std::string> &supportedFormats() const = 0;
            virtual const Color &color() const;
            virtual void color(const Color &);
        protected:
            Color _color;
            typedef std::weak_ptr<renderer_type> renderer_handle;
            renderer_handle _renderer_handle;
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
