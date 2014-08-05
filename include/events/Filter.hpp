#pragma once
#include "events/Event.hpp"
#include <string>

namespace vulture{
    namespace events{
        class Filter{
        public:
            Filter(const std::string &);
            virtual bool filter(const Event &) = 0;
            const std::string &name() const;
        private:
            const std::string _name;
        };
    }
}
