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
#include "menu.h"

class display
{
    public:
        display();
        void setup();
        void reshape(GLsizei width, GLsizei height); 
        void keyboard(unsigned char key, int x, int y);
        void specialKeys(int key, int x, int y);
        void mouse(int button, int state, int x, int y);
        void Timer(int value);
        void draw();
        void changeSection();

    protected: 
        game Game;
        menu Menu;       
       
};

#endif
