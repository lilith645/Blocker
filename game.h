#ifndef GAME_H
#define GAME_H

#ifdef __APPLE__
#include <GLUT/glut.h>
#include <GLUT/freeglut.h>
#else
#include <GL/glut.h>
#include <GL/freeglut.h>
#endif

#include <iostream>
#include <math.h> 

class game 
{
    public:
        int blocks[10][10];
        game();
        void start();
        void stop();
        void draw();
        bool isRunning();
    protected:         
        bool running; 
        void drawBlocks();
        void populateBlocks();
};

#endif
