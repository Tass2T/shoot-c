#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <stdbool.h>
#include <time.h>

#define SPEED 10
#define W_WIDTH 800
#define W_HEIGHT 600
#define TOTALPOINT 1000

void getInput();
int initSDL();
void drawRectangle ();
void initTexture ();
void displayTexture();
void killSDL();

extern SDL_Window* pWindow;
extern SDL_Renderer* pRenderer;
extern SDL_Rect rect1;
extern SDL_Rect rect2;
extern bool isOpen;

#endif