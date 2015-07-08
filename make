#!/usr/bin/make -f
CC = g++
CFLAGS  = -Wall
PROG = Blocker

SRCS = main.cpp display.cpp game.cpp menu.cpp

LIBS = -lglut -lGLU -lGL

all: $(PROG)

$(PROG):	$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)

clean:
	rm -f $(PROG) 

