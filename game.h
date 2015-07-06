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

class game 
{
    public:
        void startGame();
    protected:
        game();
        void drawGame();
};

#endif
