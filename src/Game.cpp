#include "../include/Game.h"

Game::Game() {
  printf("Game setup\n");
  
  level = 1;
  
  boostRand.newSeed(time(NULL));
  for(int i = 0; i < 10; ++i) {
    for(int j = 0; j < 10; ++j) {
       blocks[i][j].setup(i, j);
    }
  }
  setBlockColours();
  score = 0;
}

void Game::setBlockColours() {
  for(int i = 0; i < 10; ++i) {
    for(int j = 0; j < 10; ++j) {
      blocks[i][j].setColour(boostRand.Int(RED, PURPLE)); 
    }
  }
  checkBlocks();
}

void Game::checkBlock(int i, int j) {
  
 /* if(i > 1) {
    for(int k = 0; k < i; ++k) {
      
    }
  }
  if(i < 8) {
    for(int k = 9; k > i; ++k) {
    
    }
  }
  if(j > 1) {
    for(int k = 0; k < j; ++k) {
    
    }
  }
  if(j < 8)
    for(int k = 9; k > j; ++k) {
    
    }
  }*/
}

void Game::checkBlocks() {
  for(int i = 0; i < 10; ++i) {
    for(int j = 0; j < 10; ++j) {
      if(blocks[i][j].getColour() != NOTHING) {
        int crntColour = blocks[i][j].getColour();
        // Up and Down
        if ( crntColour == blocks[i][j+1].getColour() && 
             crntColour == blocks[i][j+2].getColour() ) {
             
          for(int k = 0; k < 3; ++k)
            blocks[i][j+k].setColour(NOTHING); 

        }
                
        // Left and Right
        if( crntColour == blocks[i+1][j].getColour() &&
                   crntColour == blocks[i+2][j].getColour()) {
          for(int k = 0; k < 3; ++k)
            blocks[i+k][j].setColour(NOTHING);
        }
      }
    }
  }
}

          /*if( j < 7 && crntColour == blocks[i][j+3].getColour() ) {
            blocks[i][j+3].setVisible(false);
            if( j < 6 && crntColour == blocks[i][j+4].getColour() ) {
              blocks[i][j+4].setVisible(false);
              if( j < 5 && crntColour == blocks[i][j+5].getColour() ) {
                blocks[i][j+5].setVisible(false);
                if( j < 4 && crntColour == blocks[i][j+6].getColour() ) {
                  blocks[i][j+6].setVisible(false);
                  if( j < 3 && crntColour == blocks[i][j+7].getColour() ) {
                    blocks[i][j+7].setVisible(false);
                    if( j < 2 && crntColour == blocks[i][j+8].getColour() ) {
                      blocks[i][j+8].setVisible(false);
                      if( j < 1 && crntColour == blocks[i][j+9].getColour() ) {
                        blocks[i][j+9].setVisible(false);
                      }
                    }
                  }
                }
              }
            }
          }*/

void Game::draw() {
  for(int i = 0; i < 10; ++i) {
    for(int j = 0; j < 10; ++j) {
      blocks[i][j].draw();
    }
  }
  selected.draw();
}

void Game::physics() {
  for(int i = 0; i < 10; ++i) {
    for(int j = 9; j > 0; --j) {
      if(blocks[i][j].getColour() != NOTHING && blocks[i][j-1].getColour() == NOTHING) {
        blocks[i][j-1].setColour(blocks[i][j].getColour());
        blocks[i][j].setColour(NOTHING);
      }
    }
  }
}

void Game::update(float delta, unsigned char* keyState, unsigned char* prevKeyState) {
  physics();
  checkBlocks();
  selected.update(delta, keyState, prevKeyState);
  
  if(keyState[GLFW_KEY_SPACE] == BUTTON_DOWN && 
     prevKeyState[GLFW_KEY_SPACE] != BUTTON_DOWN) {
    
    int tempx = selected.getX();
    int tempy = selected.getY();
    int tempColour = blocks[tempx][tempy].getColour();
    blocks[tempx][tempy].setColour(blocks[tempx+1][tempy].getColour());
    blocks[tempx+1][tempy].setColour(tempColour);
  }
}

void Game::drawGrid() {
  for(int i = 0; i < 40; ++i) {
    glColor3f(1.0f, 1.0f, 1.0f);
    drawQuad(5 + i*48, 10, 0, SPACE_X_RESOLUTION*2);
    drawQuad(10, SPACE_X_RESOLUTION*2, 0 + i*48, 10);
  }
}
