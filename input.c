#include "main.h"

void getInput()
{
    SDL_Event events;

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