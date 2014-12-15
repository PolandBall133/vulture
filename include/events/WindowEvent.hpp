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
                explicit Moved(){}
                Point position;
            };
            struct Resized{
                explicit Resized(){}
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
            } type;

            union Events{
                Shown shown;
                Exposed exposed;
                Moved moved;
                Resized resized;
                Minimized minimized;
                Maximized maximized;
                Restored restored;
                Closed closed;
            } events;

            uint32_t ID;
        };
    }
}
