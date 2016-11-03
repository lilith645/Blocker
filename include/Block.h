#ifndef BLOCK_H
#define BLOCK_H

#include "./defines.h"

class Block {
  public:
    Block();
    
    void draw();
    void update();
    void setup(int x, int y);
    
    int getX() { return x; }
    int getY() { return y; }
    int getColour() { if (visible) { return colour; } return -1; }
    bool getVisible() { return visible; }
     
    void setVisible(bool visible) { this->visible = visible; }
    void setColour(int colour) { this->colour = colour; }
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
  protected:
    int x, y;
    int colour;
    int size;
    bool visible;
};

#endif
