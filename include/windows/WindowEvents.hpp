#pragma once

#include <cinttypes>

namespace vulture{
    class WindowEvent{
    public:
        class Shown;
        class Exposed;
        class Moved;
        class Resized;
        class Minimized;
        class Maximized;
        class Restored;
        class Closed;

        enum class Type : uint32_t{
            Shown, Exposed,
            Moved, Resized,
            Minimized, Maximized,
            Restored, Closed
        };
        union Event;

        Type type() const;
    protected:
        Type _type;
    };

    class WindowEvent::Shown{
    };

    class WindowEvent::Exposed{
    };

    class WindowEvent::Moved{
    };

    class WindowEvent::Resized{
    };

    class WindowEvent::Minimized{
    };

    class WindowEvent::Maximized{
    };

    class WindowEvent::Restored{
    };

    class WindowEvent::Closed{
    };

    union WindowEvent::Event{
        Shown shown;
        Exposed exposed;
        Moved moved;
        Resized resized;
        Minimized minimized;
        Maximized maxmized;
        Closed restored;
    };
}
