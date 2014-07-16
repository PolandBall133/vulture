#include "Game.hpp"

namespace vulture{
    Game::Game(Window::Factory *factory){
        window_factory = std::shared_ptr<Window::Factory>(factory);
    }

    void
    Game::start(){
        initialize();
        auto new_time = std::chrono::system_clock::now();
        auto old_time = new_time;
        std::chrono::duration<double> elapsed_time;
        while(!quit){
            new_time = std::chrono::system_clock::now();
            elapsed_time = new_time - old_time;
            old_time = new_time;
            update(elapsed_time);
            draw();
        }
        finalize();
    }

    void
    Game::update(std::chrono::duration<double> elapsed_time){
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
