#pragma once

#include <chrono>
#include <memory>

#include "Window.hpp"

namespace vulture{
    //TODO: Tests. Mocks? Something? i don't know
    class Game{
    public:
        Game(Window::Factory *);
        void start();
    protected:
        virtual void onUpdate(std::chrono::duration<double>) = 0;
        virtual void onInitialize() = 0;
        virtual void onFinalize() = 0;
        virtual void onDraw() = 0;

        bool quit;
        std::shared_ptr<Window::Factory> window_factory;
    private:
        void update(std::chrono::duration<double>);
        void initialize();
        void finalize();
        void draw();
    };
}
