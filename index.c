#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>

int main (int argc, char* argv[]) {

    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[debug] %s", SDL_GetError()); 
        return EXIT_FAILURE;
    }

    SDL_Window* pWindow;
    SDL_Renderer* pRenderer;
    SDL_Event events;
    bool isOpen = true;
 
    if (SDL_CreateWindowAndRenderer(800,600, SDL_WINDOW_SHOWN, &pWindow, &pRenderer) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[debug] %s", SDL_GetError());
        SDL_Quit(); 
        return EXIT_FAILURE;
    }

    char* title = SDL_GetWindowTitle(*pWindow);

    while(isOpen)
    {
        while (SDL_PollEvent(&events))
        {
            switch(events.type)
            {
                case SDL_QUIT:
                    isOpen = false;
                    break;
            }
        }
    }



    SDL_DestroyRenderer(pRenderer);
    SDL_DestroyWindow(pWindow);
    SDL_Quit();

    return EXIT_SUCCESS;
}