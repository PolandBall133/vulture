#include <SDL.h>
#include <iostream>
#undef main
int main(int argc, char* argv[]){

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *w = SDL_CreateWindow("Test!", 250, 250, 500, 500, SDL_WINDOW_SHOWN);

    SDL_Renderer *r = SDL_CreateRenderer(w, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);


    SDL_RenderClear(r);

    SDL_RenderPresent(r);

    SDL_Delay(2500);

    SDL_DestroyRenderer(r);
    SDL_DestroyWindow(w);
    SDL_Quit();

return 0;
}
