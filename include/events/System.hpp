#pragma once
#include "events/Events.hpp"
#include "events/EventsFilter.hpp"
#include "list"

namespace vulture{
    namespace events{
        class System{
        public:
            virtual void poll() = 0;
        protected:
        private:
        };
    }
}
