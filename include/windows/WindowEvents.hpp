#pragma once

#include <cinttypes>

namespace vulture{
    class WindowEvent{
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
        union Event{
            Shown shown;
            Exposed exposed;
            Moved moved;
            Resized resized;
            Minimized minimized;
            Maximized maxmized;
            Closed restored;
        };

        const Event event() const;
        Type type() const;
    protected:
        Type _type;
        Event _event;
    };
}
