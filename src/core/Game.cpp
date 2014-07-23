#include "Core/Game.hpp"

namespace vulture{
    namespace Core{
        using namespace windows;
        Game::Game(Window::Factory *factory, TicksProvider *tp){
            window_factory = std::shared_ptr<Window::Factory>(factory);
            ticks_provider = std::shared_ptr<TicksProvider>(tp);
        }

        void
        Game::start(){
            initialize();
            auto new_time = ticks_provider->ticks();
            auto old_time = new_time;
            auto elapsed_time = new_time - old_time;
            while(!quit){
                new_time = ticks_provider->ticks();
                elapsed_time = new_time - old_time;
                old_time = new_time;
                update(elapsed_time);
                draw();
            }
            finalize();
        }

        void
        Game::update(time_t elapsed_time){
            onUpdate(elapsed_time);
        }

        void
        Game::initialize(){
            onInitialize();
        }

        void
        Game::finalize(){
            onFinalize();
        }

        void
        Game::draw(){
            onDraw();
        }
    }
}
