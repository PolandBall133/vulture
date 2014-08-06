#pragma once
#include <cinttypes>
#include "util/Point.hpp"
#include "util/Size.hpp"

namespace vulture{
    namespace events{
        class WindowEvent{
        public:
            struct Shown{};
            struct Exposed{};
            struct Moved{
                Point position;
            };
            struct Resized{
                Size size;
            };
            struct Minimized{};
            struct Maximized{};
            struct Restored{};
            struct Closed{};

            enum class Type : uint32_t{
                Shown, Exposed,
                Moved, Resized,
                Minimized, Maximized,
                Restored, Closed
            };

            union Events{
                Shown shown;
                Exposed exposed;
                Moved moved;
                Resized resized;
                Minimized minimized;
                Maximized maximized;
                Restored restored;
                Closed closed;
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
