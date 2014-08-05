#pragma once
#include "events/EventsFilter.hpp"
#include "events/Events.hpp"
#include <list>
#include <memory>
#include <string>
#include <utility>

namespace vulture{
    namespace events{
        class EventsFilterGroup{
        public:
            EventsFilterGroup(const std::string &);
            const std::string &name() const;
            EventsFilterGroup &add(std::shared_ptr<EventsFilter>);
            bool filter(const Events &);
        protected:
            virtual bool checkType(const Events &) = 0;
            std::list<std::shared_ptr<EventsFilter>> _eventsFilters;
        private:
            const std::string _name;
        };
    }
}
