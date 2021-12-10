#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <time.h>

#define TOTALPOINT 1000

int main (int argc, char* argv[]) {

    srand(time(NULL));

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

            SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 255);
            SDL_RenderClear(pRenderer);
            SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, 255);
            SDL_RenderDrawPoint(pRenderer, 10, 10);
            SDL_RenderPresent(pRenderer);
        }
    }



    SDL_DestroyRenderer(pRenderer);
    SDL_DestroyWindow(pWindow);
    SDL_Quit();

    return EXIT_SUCCESS;
}