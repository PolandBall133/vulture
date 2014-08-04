#pragma once
#include <cinttypes>
#include "util/Point.hpp"
#include "util/Size.hpp"

namespace vulture{
    namespace events{
        class WindowEvent{
        public:
            struct Moved{
                Point position;
            };

            struct Resized{
                Size size;
            };

            enum class Type : uint32_t{
                Shown, Exposed,
                Moved, Resized,
                Minimized, Maximized,
                Restored, Closed
            };

            union Events{
                Moved moved;
                Resized resized;
            };

            Type type() const;
            const Events &events() const;
            uint32_t windowID() const;
        protected:
            void windowID(uint32_t);
        private:
            Type _type;
            Events _events;
            uint32_t _windowID;
        };
    }
}
