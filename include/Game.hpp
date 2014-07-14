#pragma once
#include <cinttypes>

namespace vulture{
    class Game{
    public:
        void start();
    protected:
        //TODO: onUpdate(ticks)
        virtual void onInitialize() = 0;
        virtual void onFinalize() = 0;
        virtual void onDraw() = 0;

        //TODO: update(ticks)
        void initialize();
        void finalize();

        bool quit;
    };
}
