#pragma once

#include <cinttypes>

namespace vulture{
    namespace windows{
        class Event{
        public:
            class Shown{};
            class Exposed{};
            class Moved{};
            class Resized{};
            class Minimized{};
            class Maximized{};
            class Restored{};
            class Closed{};

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

            const Events events() const;
            Type type() const;
        protected:
            Type _type;
            Events _events;
        };
    }
}
