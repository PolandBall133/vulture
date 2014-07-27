#pragma once

namespace vulture{
    namespace graphics{
        class SpriteBatch{
            virtual void begin() = 0;
            virtual void end() = 0;
            virtual const Color backgroundColor() const = 0;
            virtual void backgroundColor(const Color &) const = 0;
        };
    }
}
