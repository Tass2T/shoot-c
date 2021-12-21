#include "main.h"

#define TOTALPOINT 1000

int main (int argc, char* argv[]) {

    srand(time(NULL));
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    initSDL();

    while(isOpen)
    {
        frameStart = SDL_GetTicks();

        getInput();
        drawRectangle();

        frameTime = SDL_GetTicks() - frameStart;

        if (frameDelay > frameTime) SDL_Delay(frameDelay - frameTime);

    }



    SDL_DestroyRenderer(pRenderer);
    SDL_DestroyWindow(pWindow);
    SDL_Quit();

    return EXIT_SUCCESS;
}

// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2