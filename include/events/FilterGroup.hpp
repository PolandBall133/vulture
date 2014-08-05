#pragma once
#include "events/Filter.hpp"
#include "events/Event.hpp"
#include <list>
#include <memory>
#include <string>
#include <utility>

namespace vulture{
    namespace events{
        class FilterGroup{
        public:
            FilterGroup(const std::string &);
            const std::string &name() const;
            FilterGroup &add(std::shared_ptr<Filter>);
            bool filter(const Event &);
        protected:
            virtual bool checkType(const Event &) = 0;
            std::list<std::shared_ptr<Filter>> _filters;
        private:
            const std::string _name;
        };
    }
}
