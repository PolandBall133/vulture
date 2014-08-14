#pragma once
#include "events/Event.hpp"
#include <string>

#define VULTURE_DECLARE_FILTER(name) \
    class name##Filter: \
        public events::Filter{ \
    public: \
        name##Filter(); \
        virtual bool filter(const events::Event &) override; \
    }

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
