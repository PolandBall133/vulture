#pragma once
#include "events/Events.hpp"

namespace vulture{
    namespace events{
        class System{
        public:
            virtual void poll() = 0;
        protected:
        private:
        };
    }
}
