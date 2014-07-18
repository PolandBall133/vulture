#pragma once
#include <ctime>

namespace vulture{
    class TicksProvider{
    public:
        virtual time_t ticks() = 0;
    };
}