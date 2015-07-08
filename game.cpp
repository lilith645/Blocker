#include "game.h"

game::game() {
      srand (time(NULL));;
      running = true;
}

void game::drawSquare(coord Coord) {
  //image = SOIL_load_image("Textures/Block.png", &width, &height, 0, SOIL_LOAD_RGB);
  // glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
   //SOIL_free_image_data(image);                       

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(-0.495f + Coord.xOffset, 0.98f - Coord.yOffset);//top left
    glVertex2f(-0.495f + Coord.xOffset, 0.82f - Coord.yOffset);//top right
    glVertex2f(-0.415f + Coord.xOffset, 0.82f - Coord.yOffset);//bottom right
    glVertex2f(-0.415f + Coord.xOffset, 0.98f - Coord.yOffset);//bottom left
    glEnd();  
}


void game::drawBlocks() {
   coord place;
   for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++) {
           place.xOffset = j * 0.1;
           place.yOffset = i * 0.2;
           place.color = 0.1f;
           drawSquare(place);
       }
   }
}

void game::start() {
    running = true;
}

void game::stop() {
    SOIL_free_image_data(image);
    running = false;
}

bool game::isRunning() {
    return running;
}

void game::draw() {
    drawBlocks();
}

void game::populateBlocks() {

}

