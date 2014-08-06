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
            void addFilters(std::weak_ptr<FiltersGroup>);
        protected:
            std::list<std::weak_ptr<FiltersGroup>> _filtersGroups;
            void handleEvent(const Event &);
        private:
        };
    }
}
