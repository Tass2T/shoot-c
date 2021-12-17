CC = gcc
FLAGS = -Wall -pedantic
OBJ = index.o global.o init.o input.o draw.o
LIB = -lSDL2main -lSDL2

all: main clean

main: $(OBJ)
	$(CC) -o index $^ $(FLAGS) $(LIB)

clean:
	rm *.o