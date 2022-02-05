CC = gcc
FLAGS = -Wall -pedantic
OBJ = index.o global.o init.o input.o draw.o
LIB = -lSDL2main -lSDL2

linux:
	gcc src/*.c -o prog $(sdl2-config --flags --libs) -I include -L lib -lSDL2main -lSDL2

window:
	gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2