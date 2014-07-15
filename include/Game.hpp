#pragma once
#include <cinttypes>
#include <chrono>

namespace vulture{
    //TODO: Tests. Mocks? Something? i don't know
    class Game{
    public:
        void start();
    protected:
        virtual void onUpdate(std::chrono::duration<double>) = 0;
        virtual void onInitialize() = 0;
        virtual void onFinalize() = 0;
        virtual void onDraw() = 0;

        bool quit;
    private:
        void update(std::chrono::duration<double>);
        void initialize();
        void finalize();
        void draw();
    };
}
