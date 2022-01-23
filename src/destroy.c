#include "main.h"

void killSDL()
{
    SDL_DestroyWindow(pWindow);
    SDL_DestroyRenderer(pRenderer);
}