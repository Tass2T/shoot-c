#include "main.h"

SDL_Surface* createAndCheckSurface(char imagePath[])
{
    SDL_Surface *surface = NULL;

    surface = SDL_LoadBMP(imagePath);

    if(surface == NULL)
    {
            killSDL();
            isOpen = false;
    }

    return surface;

}

SDL_Texture* createAndCheckTexture(SDL_Surface* surface)
{
    SDL_Texture *texture = NULL;

    texture = SDL_CreateTextureFromSurface(pRenderer, surface);
    if (texture == NULL)
    {
        SDL_FreeSurface(surface);
        killSDL();
        isOpen = false;
    }

    SDL_FreeSurface(surface);

    return texture;
}

void putTextureToMemory(SDL_Texture* texture)
{
    if (SDL_QueryTexture(texture, NULL, NULL, &rect1.w, &rect1.h) != 0)
    {
        killSDL();
        SDL_Log("petit probleme avec la queryTexture");
        isOpen = false;
    }

    if (SDL_RenderCopy(pRenderer, texture, NULL, &rect1) != 0)
    {
        killSDL();
        SDL_Log("Problème avec le rendu de la texture");
        isOpen = false;
    }
}

void initTexture () {

    SDL_Surface *surface1 = createAndCheckSurface("./assets/test.bmp");

    SDL_Texture *texture1 = createAndCheckTexture(surface1);

    // now create the rectangle that will serve as a frame to the texture
    // or just use rect1 from global.c lol
    putTextureToMemory(texture1);
    
    
}

void displayTexture () {
    SDL_RenderPresent(pRenderer);
}

// a été créé pour tester les triangles
void drawRectangle () {
    SDL_RenderClear(pRenderer);
    SDL_SetRenderDrawColor(pRenderer, 145,13,0,255);
    SDL_RenderFillRect(pRenderer, &rect1);
    SDL_SetRenderDrawColor(pRenderer, 30, 125,10,255);
    SDL_RenderFillRect(pRenderer, &rect2);
    SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 255);

    SDL_RenderPresent(pRenderer);

}