#ifndef SELECTOR_H
#define SELECTOR_H

#include "defines.h"

class Selector {
  public:
    Selector();
    void draw();
    void update(float delta, unsigned char* keyState, unsigned char* prevKeyState);
    
    int getX() { return x; }
    int getY() { return y; }
    
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
  protected:
    int x, y;
};

#endif
