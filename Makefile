#!/usr/bin/make -f
CC = g++
CFLAGS  = -Wall
PROG = Blocker

SRCS = ./src/main.cpp ./src/Game.cpp ./src/Block.cpp ./src/Random.cpp

LIBS = -lglfw -lGLC -lGLU -lGL -lpng

all: $(PROG)

$(PROG):	$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)

clean:
	rm -f $(PROG) 

