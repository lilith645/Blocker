#include "game.h"

game::game() {
      srand (time(NULL));
      
}

void game::drawBlocks() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void game::start() {
   running = true;
}

void game::stop() {
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

