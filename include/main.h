#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <stdbool.h>
#include <time.h>

#define SPEED 10
#define W_WIDTH 1920
#define W_HEIGHT 1080
#define TOTALPOINT 1000

void getInput();
int initSDL();
void drawRectangle ();
void initTexture ();
void displayTexture();
void killSDL();

extern SDL_Window* pWindow;
extern SDL_Renderer* pRenderer;
extern bool isOpen;
extern SDL_Rect backgroundRect;
extern SDL_Rect shipRect;
extern SDL_Texture *background;
extern SDL_Texture *ship;

#endif