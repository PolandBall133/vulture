#pragma once
#include "events/EventsFilter.hpp"
#include <list>
#include <memory>
#include <string>

namespace vulture{
    namespace events{
        class EventsFilterGroup{
        public:
            FilterGroup(const std::string &);
            const std::string &name() const;
        protected:
        private:
            const std::string _name;
        };
    }
}
