#include "graphics/Texture.hpp"

namespace vulture{
    namespace graphics{
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
