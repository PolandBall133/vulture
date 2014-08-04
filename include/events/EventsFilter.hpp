#pragma once
#include "events/Events.hpp"

namespace vulture{
    namespace events{
        class EventsFilter{
        public:
            virtual void filter(const Events &) = 0;
        };
    }
}
