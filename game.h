#ifndef GAME_H
#define GAME_H
#define GLM_FORCE_RADIANS
#ifdef __APPLE__
#include <GLUT/glut.h>
#include <GLUT/freeglut.h>
#include <OpenGL/glu.h>
#include <OpenGL/glext.h>
//#include "SOIL/SOIL.h"
#else
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <GL/glu.h>

//#include "SOIL/SOIL.h"
#endif

#include <iostream>
#include <math.h> 

typedef struct {
    float xOffset;
    float yOffset;
    float color;
} coord;

class game 
{
    public:
        int blockColour[10][10];
        game();
        void start();
        void stop();
        void draw();
        bool isRunning();
    protected:   
        int width, height;
        unsigned char* image;
    
        bool running; 
        void drawSquare(coord Coord);
        void drawBlocks();
        void populateBlocks();
};

#endif
