#pragma once

#include <chrono>
#include <memory>

#include "Window.hpp"
#include "TicksProvider.hpp"

namespace vulture{
    //TODO: Tests. Mocks? Something? i don't know
    class Game{
    public:
        Game(Window::Factory *, TicksProvider *);
        void start();
    protected:
        virtual void onUpdate(std::chrono::duration<double>) = 0;
        virtual void onInitialize() = 0;
        virtual void onFinalize() = 0;
        virtual void onDraw() = 0;

        bool quit;
        std::shared_ptr<Window::Factory> window_factory;
        std::shared_ptr<TicksProvider> ticks_provider;

        void update(std::chrono::duration<double>);
        void initialize();
        void finalize();
        void draw();
    };
}
