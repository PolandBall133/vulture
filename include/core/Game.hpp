#pragma once

#include <chrono>
#include <memory>

#include "windows/Window.hpp"
#include "TicksProvider.hpp"

namespace vulture{
    namespace core{
        class Game{
        public:
            Game(windows::Window::Factory *, TicksProvider *);
            void start();
        protected:
            virtual void onUpdate(time_t) = 0;
            virtual void onInitialize() = 0;
            virtual void onFinalize() = 0;
            virtual void onDraw() = 0;

            bool quit;
            std::shared_ptr<windows::Window::Factory> window_factory;
            std::shared_ptr<TicksProvider> ticks_provider;

            virtual void update(time_t);
            virtual void initialize();
            virtual void finalize();
            virtual void draw();
        };
    }
}
