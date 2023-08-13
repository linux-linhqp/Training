CC = g++
HEADER = -I./header/controller -I./header/model -I./header/view -I/usr/include/taglib -I/usr/include/SDL2
LIB_DIR = /usr/local/lib
LIB = -L$(LIB_DIR) -ltag -lSDL2 -lSDL2_mixer -lz
SRC = ./src/controller/*.cpp ./src/model/*.cpp ./src/view/*.cpp 

all: main

main:
	$(CC) $(CFLAGS) $(HEADER) -o main $(SRC) main.cpp $(LIB)

clear:
	@rm -f main
