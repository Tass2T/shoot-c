#include "main.h"

void setFilledRectangleForTest()
{
    SDL_SetRenderDrawColor(pRenderer,0,0,255,255);
    SDL_RenderFillRect(pRenderer, &backgroundRect);
}

