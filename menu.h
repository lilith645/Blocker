#ifndef MENU_H
#define MENU_H

#ifdef __APPLE__
#include <GLUT/glut.h>
#include <GLUT/freeglut.h>
#else
#include <GL/glut.h>
#include <GL/freeglut.h>
#endif

#include <iostream>
#include <math.h> 

typedef struct {
    float xOffset;
    float yOffset;
    float color;
} coord;


class menu 
{
    public:
        menu();
        void draw();
        void stop();
        void start();
    protected:      
        coord newCorrd;
        void drawSquare(coord Coord);
        bool isRunning;    
};

#endif
