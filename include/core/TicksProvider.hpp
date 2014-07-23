#pragma once
#include <ctime>

namespace vulture{
    namespace core{
        class TicksProvider{
        public:
            virtual time_t ticks() = 0;
        };
    }
}
