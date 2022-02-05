#include "main.h"

bool isOpen = true;

SDL_Window* pWindow;
SDL_Renderer* pRenderer;


SDL_Rect backgroundRect = {1, 1, 90, 90};
SDL_Rect shipRect = {400, 300, 20, 60};

SDL_Texture *background = NULL;
SDL_Texture *ship = NULL;