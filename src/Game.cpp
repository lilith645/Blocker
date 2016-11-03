#include "../include/Game.h"

Game::Game() {
  printf("Game setup\n");
  
  boostRand.newSeed(time(NULL));
  for(int i = 0; i < 10; ++i) {
    for(int j = 0; j < 10; ++j) {
       blocks[i][j].setup(i, j);
    }
  }
  setBlockColours();
}

void Game::setBlockColours() {
  for(int i = 0; i < 10; ++i) {
    for(int j = 0; j < 10; ++j) {
      blocks[i][j].setColour(boostRand.Int(RED, PURPLE)); 
    }
  }
}

void Game::draw() {
  for(int i = 0; i < 10; ++i) {
    for(int j = 0; j < 10; ++j) {
      blocks[i][j].draw();
    }
  }
}

void Game::update(float delta, unsigned char* keyState, unsigned char* prevKeyState) {

}

void Game::drawGrid() {
  for(int i = 0; i < 40; ++i) {
    glColor3f(1.0f, 1.0f, 1.0f);
    drawQuad(5 + i*48, 10, 0, SPACE_X_RESOLUTION*2);
    drawQuad(10, SPACE_X_RESOLUTION*2, 0 + i*48, 10);
  }
}
