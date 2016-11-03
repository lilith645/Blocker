#include "../include/Block.h"

Block::Block() {
  this->x = 0;
  this->y = 0;
  this->colour = BLUE;
  this->size = 85;
  this->visible = true;
}

void Block::setup(int x, int y) {
  this->x = x;
  this->y = y;
}

void Block::draw() {
  
  switch(colour) {
    case NOTHING:
      glColor3f(0.0, 0.0, 0.0);
      break;
    case RED:
      glColor3f(1.0, 0.0, 0.0);
      break;
    case GREEN:
      glColor3f(0.0, 1.0, 0.0);
      break;
    case BLUE:
      glColor3f(0.0, 0.0, 1.0);
      break;
    case YELLOW:
      glColor3f(1.0, 1.0, 0.0);
      break;
    case LIGHTBLUE:
      glColor3f(0.0, 1.0, 1.0);
      break;
    case PURPLE:
      glColor3f(1.0, 0.0, 1.0);
      break;
  }
  drawQuad(x*(size+20) + SPACE_X_RESOLUTION/4, size, y*(size+20) + 65, size);
}

void Block::update() {

}


