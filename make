#!/usr/bin/make -f
CC = g++
CFLAGS  = -Wall
PROG = Blocker

SRCS = main.cpp

LIBS = -lglut -lGLU -lGL

all: $(PROG)

$(PROG):	$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)

clean:
	rm -f $(PROG) 

