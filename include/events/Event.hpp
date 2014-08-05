#pragma once
#include "events/WindowEvent.hpp"

namespace vulture{
    namespace events{
        class Event{
        public:
            enum Type: uint32_t{
                Window
            };
            union Events{
                WindowEvent window;
            };
            const Events &events() const;
            Type type() const;
        protected:
            Events _events;
            Type _type;
        };
    }
}
