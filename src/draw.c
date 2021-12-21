#include "main.h"

void drawRectangle () {
    SDL_RenderClear(pRenderer);
    SDL_SetRenderDrawColor(pRenderer, 145,13,0,255);
    SDL_RenderFillRect(pRenderer, &rect1);
    SDL_SetRenderDrawColor(pRenderer, 30, 125,10,255);
    SDL_RenderFillRect(pRenderer, &rect2);
    SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 255);

    SDL_RenderPresent(pRenderer);

}