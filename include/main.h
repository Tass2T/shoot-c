#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <stdbool.h>
#include <time.h>

#define SPEED 10
#define W_WIDTH 1720
#define W_HEIGHT 880
#define TOTALPOINT 1000

void getInput();
int initSDL();
void killSDL();

extern SDL_Window* pWindow;
extern SDL_Renderer* pRenderer;

// MAIN LOOP
extern bool isOpen;

// DRAW
void setFilledRectangleForTest();

// BACKGROUND
extern SDL_Rect backgroundRect;
extern SDL_Rect shipRect;
extern SDL_Texture *background;
extern SDL_Texture *ship;

#endif