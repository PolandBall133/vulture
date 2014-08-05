#pragma once
#include "events/Events.hpp"
#include "events/EventsFilterGroup.hpp"
#include <list>
#include <memory>

namespace vulture{
    namespace events{
        class System{
        public:
            virtual void poll() = 0;
            void addFilters(std::shared_ptr<EventsFilterGroup>);
        protected:
            std::list<std::shared_ptr>> _eventsFilterGroups;
        private:
        };
    }
}
