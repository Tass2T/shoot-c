#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <time.h>

#define SPEED 10

void getInput();
int initSDL();
void drawRectangle ();

extern SDL_Window* pWindow;
extern SDL_Renderer* pRenderer;
extern SDL_Rect rect1;
extern SDL_Rect rect2;
extern bool isOpen;

#endif