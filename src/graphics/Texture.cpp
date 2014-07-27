#include "graphics/Texture.hpp"

namespace vulture{
    namespace graphics{
        Texture::Texture(const Color &c):
            _color(c)
        {
            color(c);
        }

        const Color &
        Texture::color() const{
            return _color;
        }

        void
        Texture::color(const Color &val){
            _color = val;
        }
    }
}
