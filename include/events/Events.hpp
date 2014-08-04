#pragma once
#include "events/WindowEvent.hpp"

namespace vulture{
    namespace events{
        class Events{
        public:
            enum Type: uint32_t{
                Window
            };
            union EventsUnion{
                WindowEvent window;
            };
            const EventsUnion &events() const;
            Type type() const;
        protected:
            EventsUnion _events;
            Type _type;
        };
    }
}
