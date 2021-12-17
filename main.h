#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <time.h>

extern bool isOpen;

void getInput();
int initSDL();
void drawRectangle ();

extern SDL_Window* pWindow;
extern SDL_Renderer* pRenderer;

#endif