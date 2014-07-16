#pragma once
#include <ctime>

namespace vulture{
    //TODO: Tests. Mocks? Something? i don't know
    class TicksProvider{
    public:
        virtual time_t ticks() = 0;
    };
}
