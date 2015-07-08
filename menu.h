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



class menu 
{
    public:
        menu();
        void draw();
        void stop();
        void start();
    protected:      
        bool isRunning;    
};

#endif
