#include "main.h"

int main (int argc, char* argv[]) {

    srand(time(NULL));
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    initSDL();
    initTexture();

    while(isOpen)
    {
        frameStart = SDL_GetTicks();
        frameTime = SDL_GetTicks() - frameStart;
        getInput();
        drawRectangle();

        if (frameDelay > frameTime) SDL_Delay(frameDelay - frameTime);
    }

    killSDL();
    SDL_Quit();
    return EXIT_SUCCESS;
}

// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2

// sous linux : gcc src/*.c -o prog $(sdl2-config --flags --libs) -I include -L lib -lSDL2main -lSDL2