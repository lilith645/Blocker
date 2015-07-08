#include "menu.h"

menu::menu () {

}

void menu::start() {
    isRunning = true;
}

void menu::stop() {
    isRunning = false;
}

void menu::drawSquare(coord Coord) {
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(-0.495f + Coord.xOffset, 0.98f - Coord.yOffset);//top left
    glVertex2f(-0.495f + Coord.xOffset, 0.82f - Coord.yOffset);//top right
    glVertex2f(-0.415f + Coord.xOffset, 0.82f - Coord.yOffset);//bottom right
    glVertex2f(-0.415f + Coord.xOffset, 0.98f - Coord.yOffset);//bottom left
    glEnd();
    
}

void menu::draw() {
   coord place;
   for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++) {
           place.xOffset = j * 0.1;
           place.yOffset = i * 0.2;
           place.color = 0.1f;
           drawSquare(place);
       }
   }
    
    glEnd();
}
