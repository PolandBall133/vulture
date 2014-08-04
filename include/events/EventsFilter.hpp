#pragma once
#include "Events"

namespace vulture{
    namespace events{
        class EventsFilter{
        public:
            virtual void filter(const Events &) = 0;
        };
    }
}
