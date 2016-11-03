#ifndef BLOCK_H
#define BLOCK_H

#include "./defines.h"

class Block {
  public:
    Block();
    
    void draw();
    void update();
    void setup(int x, int y);
    void setColour(int colour);

  protected:
    int x, y;
    int colour;
    int size;
    bool visible;
};

#endif
