#pragma once

#include <cinttypes>
#include "input/devices/joy/Joy.hpp"
#include "input/devices/joy/Events.hpp"
#include "input/devices/Manager.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            class EventsPoller{
            public:
                virtual void poll() = 0;
            protected:
                virtual void callJoyEventHandler(joy::Event &) = 0;
                Manager<joy::Joy> joysManager;
            };
        }
    }
}
