#include "main.h"

bool isOpen = true;

SDL_Window* pWindow;
SDL_Renderer* pRenderer;


SDL_Rect backgroundRect = {0, 0, W_WIDTH, W_HEIGHT};
SDL_Rect shipRect = {400, 300, 30, 12};

SDL_Texture *background = NULL;
SDL_Texture *ship = NULL;