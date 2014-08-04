#pragma once
#include "events/EventsFilter.hpp"
#include <list>
#include <memory>
#include <string>

namespace vulture{
    namespace events{
        class EventsFilterGroup{
        public:
            EventsFilterGroup(const std::string &);
            const std::string &name() const;
            EventsFilterGroup &add(std::shared_ptr<EventsFilter>);
        protected:
            std::list<std::shared_ptr<EventsFilter>> _eventsFilters;
        private:
            const std::string _name;
        };
    }
}
