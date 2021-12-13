#include "main.h"

#define TOTALPOINT 1000

int main (int argc, char* argv[]) {

    srand(time(NULL));

    initSDL();

    while(isOpen)
    {
        getInput();
        drawRectangle();

    }



    SDL_DestroyRenderer(pRenderer);
    SDL_DestroyWindow(pWindow);
    SDL_Quit();

    return EXIT_SUCCESS;
}