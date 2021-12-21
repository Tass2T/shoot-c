#include "main.h"

int initSDL()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[debug] %s", SDL_GetError()); 
        return EXIT_FAILURE;
    }
 
    if (SDL_CreateWindowAndRenderer(800,600, SDL_WINDOW_SHOWN, &pWindow, &pRenderer) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[debug] %s", SDL_GetError());
        SDL_Quit(); 
        return EXIT_FAILURE;
    }
}
