#include "main.h"

SDL_Surface* createAndCheckSurface(char* imagePath)
{
    SDL_Surface *image = SDL_LoadBMP(imagePath);

    if(image == NULL)
    {
            printf("Failed to load image at %s: %s\n", imagePath, SDL_GetError());
            killSDL();
            killSDL();
            exit(1);
    }

    return image;

}

SDL_Texture* createAndCheckTexture(SDL_Surface* surface)
{
    SDL_Texture *texture = NULL;

    texture = SDL_CreateTextureFromSurface(pRenderer, surface);
    if (texture == NULL)
    {
        SDL_FreeSurface(surface);
        SDL_Log("Problème lors de la création de la texture...");
        killSDL();
        exit(1);
    }

    return texture;
}

void putTextureToMemory(SDL_Texture* texture)
{
    if (SDL_QueryTexture(texture, NULL, NULL, &rect1.w, &rect1.h) != 0)
    {
        SDL_Log("petit probleme avec la queryTexture");
        killSDL();
        isOpen = false;
    }

    if (SDL_RenderCopy(pRenderer, texture, NULL, &rect1) != 0)
    {
        SDL_Log("Problème avec le rendu de la texture");
        killSDL();
        isOpen = false;
    }
}

void initTexture () {

    SDL_Surface *backgroundSurface = createAndCheckSurface("src/assets/background.bmp");
    SDL_Surface *shipSurface = createAndCheckSurface("src/assets/ship-beta.bmp");
    background = createAndCheckTexture(backgroundSurface);
    ship = createAndCheckTexture(shipSurface);
    SDL_FreeSurface(backgroundSurface);
    SDL_FreeSurface(shipSurface);

    // now create the rectangle that will serve as a frame to the texture
    // or just use rect1 from global.c lol
    putTextureToMemory(background);
    putTextureToMemory(ship);
    
    
}

void displayTexture () {
    SDL_RenderPresent(pRenderer);
}

// a été créé pour tester les triangles
void drawRectangle () {
    SDL_RenderClear(pRenderer);
    SDL_RenderCopy(pRenderer, texture1, NULL, &rect1);
    SDL_RenderPresent(pRenderer);

}