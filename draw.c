#include "main.h"

void drawRectangle () {
    
    SDL_Rect rect1 = {10, 23, 50, 60};
    SDL_RenderClear(pRenderer);
    
    SDL_SetRenderDrawColor(pRenderer, 25, 250, 10, 255);
    SDL_RenderDrawRect(pRenderer, &rect1);
    SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 255);

    SDL_RenderPresent(pRenderer);
}