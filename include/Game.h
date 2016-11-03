#ifndef GAME_H
#define GAME_H

#include "./defines.h"
#include "./Block.h"
#include "./Random.h"
#include "./Selector.h"

class Game {
  public:
    Game();
    void draw();
    void update(float delta, unsigned char* keyState, unsigned char* prevKeyState);
  protected:
    void physics();
    void drawGrid();
    void checkBlock(int i, int j);
    void checkBlocks();
    void setBlockColours();
    int level;
    int score;
    
    Selector selected;
    Random boostRand;
    Block blocks[10][10];
};

#endif
