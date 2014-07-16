#pragma once

namespace vulture{
    //TODO: Tests. Mocks? Something? i don't know
    class TicksProvider{
    public:
        virtual double ticks() = 0;
    };
}
