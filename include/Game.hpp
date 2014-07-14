#pragma once
#include <cinttypes>

namespace vulture{
    class Game{
    public:
        void start();
    protected:
        virtual void onInitialize() = 0;
        virtual void onFinalize() = 0;
        virtual void onDraw() = 0;
    };
}
