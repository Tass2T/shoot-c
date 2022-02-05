#include "main.h"

void getInput()
{
    SDL_Event events;
    SDL_Rect collisionRectangle;

    while (SDL_PollEvent(&events))
    {
        switch(events.type)
        {
            case SDL_QUIT:
                isOpen = false;
                break;
            case SDL_KEYDOWN:
                switch (events.key.keysym.scancode)
                {
                    case SDL_SCANCODE_A:
                        isOpen = false;
                        break;
                    default:
                        printf("Physical %s key acting as %s key", SDL_GetScancodeName(events.key.keysym.scancode), SDL_GetKeyName(events.key.keysym.sym));
                        break;
                }
                break;
            }
        }
    }