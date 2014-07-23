#pragma once
#include <ctime>

namespace vulture{
    namespace Core{
        class TicksProvider{
        public:
            virtual time_t ticks() = 0;
        };
    }
}
