#ifndef DISPLAY_H
#define DISPLAY_H

#ifdef __APPLE__
#include <GLUT/glut.h>
#include <GLUT/freeglut.h>
#else
#include <GL/glut.h>
#include <GL/freeglut.h>
#endif

#include <stdio.h>

#include "game.h"


class display
{
    protected:
        int argc; 
        char** argv;        
        static void reshape(GLsizei width, GLsizei height); 
        static void keyboard(unsigned char key, int x, int y);
        static void specialKeys(int key, int x, int y);
        static void mouse(int button, int state, int x, int y);
        static void draw();
    public:
        display(int argc1, char** argv1);
        void setup();
   
};

#endif
