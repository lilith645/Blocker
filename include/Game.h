#ifndef GAME_H
#define GAME_H

#include "./defines.h"
#include "./Block.h"
#include "./Random.h"

class Game {
  public:
    Game();
    void draw();
    void update(float delta, unsigned char* keyState, unsigned char* prevKeyState);
  protected:
    void drawGrid();
    void setBlockColours();
    int level;
    
    Random boostRand;
    Block blocks[10][10];
};

#endif
