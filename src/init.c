#include "main.h"

int initSDL()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[debug] %s", SDL_GetError()); 
        return EXIT_FAILURE;
    }

    pWindow = SDL_CreateWindow("Jeu de tir", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, W_WIDTH, W_HEIGHT, SDL_WINDOW_OPENGL);

    if (pWindow == NULL) {
        printf("problème lors de la création de la fenetre: %s", SDL_GetError());
        return -1;
    }

    pRenderer = SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_ACCELERATED);

    if (pRenderer == NULL)
    {
        printf("problème lors de la création du renderer : %s", SDL_GetError());
        SDL_DestroyWindow(pWindow);
        return -1;
    }
 
}
