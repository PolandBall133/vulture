#pragma once
#include "events/Events.hpp"
#include <string>

namespace vulture{
    namespace events{
        class EventsFilter{
        public:
            EventsFilter(const std::string &);
            virtual void filter(const Events &) = 0;
            const std::string &name() const;
        private:
            const std::string _name;
        };
    }
}
