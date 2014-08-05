#pragma once
#include "events/Event.hpp"
#include "events/FilterGroup.hpp"
#include <list>
#include <memory>

namespace vulture{
    namespace events{
        class System{
        public:
            virtual void poll() = 0;
            void addFilters(std::shared_ptr<FilterGroup>);
        protected:
            std::list<std::shared_ptr<FilterGroup>> _filterGroups;
            void handleEvent(const Event &);
        private:
        };
    }
}
