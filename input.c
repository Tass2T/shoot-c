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
                    case SDL_SCANCODE_RIGHT:
                        rect1.x = rect1.x + SPEED;
                        if (SDL_IntersectRect(&rect1, &rect2,&collisionRectangle)) rect2.x = rect2.x + SPEED;
                        break;
                    case SDL_SCANCODE_LEFT:
                        rect1.x = rect1.x - SPEED;
                        if (SDL_IntersectRect(&rect1, &rect2,&collisionRectangle)) rect2.x = rect2.x - SPEED;
                        break;
                    case SDL_SCANCODE_DOWN:
                        rect1.y = rect1.y + SPEED;
                        if (SDL_IntersectRect(&rect1, &rect2,&collisionRectangle)) rect2.y = rect2.y + SPEED;
                        break;
                    case SDL_SCANCODE_UP:
                        rect1.y = rect1.y -SPEED;
                        if (SDL_IntersectRect(&rect1, &rect2,&collisionRectangle)) rect2.y = rect2.y - SPEED;
                        break;
                    case SDL_SCANCODE_A:
                        isOpen = false;
                    default:
                        printf("Physical %s key acting as %s key", SDL_GetScancodeName(events.key.keysym.scancode), SDL_GetKeyName(events.key.keysym.sym));
                        break;
                }
                break;
            }
        }
    }