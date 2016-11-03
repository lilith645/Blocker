#include "../include/Selector.h"

Selector::Selector() {
  this->x = 0;
  this->y = 0;
}

void Selector::draw() {
   //drawQuad(x*(size+20) + SPACE_X_RESOLUTION/4, size, y*(size+20) + 65, size);
   glColor3f(1.0, 1.0, 1.0f);
   // top left
   drawQuad(x*(85+20) + SPACE_X_RESOLUTION/4, 85, y*(85+20) + 107, 10);
   // bottom left
   drawQuad(x*(85+20) + SPACE_X_RESOLUTION/4, 85, y*(85+20) + 23, 10);
   // left side
   drawQuad(x*(85+20) + SPACE_X_RESOLUTION/4 - 42, 10, y*(85+20) + 65, 85);

   // top right
   drawQuad(x*(85+20) + (85+20) + SPACE_X_RESOLUTION/4, 85, y*(85+20) + 107, 10);
   // bottom right
   drawQuad(x*(85+20) + (85+20) + SPACE_X_RESOLUTION/4, 85, y*(85+20) + 23, 10);
   // right side
   drawQuad(x*(85+20) + (85+20) + SPACE_X_RESOLUTION/4 + 42, 10, y*(85+20) + 65, 85);
}

void Selector::update(float delta, unsigned char* keyState, unsigned char* prevKeyState) {
  if( ((keyState['w'] || keyState['W']) == BUTTON_DOWN && 
       prevKeyState['w'] != BUTTON_DOWN && prevKeyState['W'] != BUTTON_DOWN) ||
       (keyState[GLFW_KEY_UP] == BUTTON_DOWN && prevKeyState[GLFW_KEY_UP] != BUTTON_DOWN) ) {
       
    if(y < 9)
      y++;
  }
  
  if( ((keyState['s'] || keyState['S']) == BUTTON_DOWN && 
        prevKeyState['s'] != BUTTON_DOWN && prevKeyState['S'] != BUTTON_DOWN) ||
       (keyState[GLFW_KEY_DOWN] == BUTTON_DOWN && prevKeyState[GLFW_KEY_DOWN] != BUTTON_DOWN)) {
    if(y > 0)
      y--;
  }
  
  if( ((keyState['a'] || keyState['A']) == BUTTON_DOWN && 
        prevKeyState['a'] != BUTTON_DOWN && prevKeyState['A'] != BUTTON_DOWN) ||
       (keyState[GLFW_KEY_LEFT] == BUTTON_DOWN && prevKeyState[GLFW_KEY_LEFT] != BUTTON_DOWN)) {
    if(x > 0)
      x--;
  }
  
  if( ((keyState['d'] || keyState['D']) == BUTTON_DOWN && 
        prevKeyState['d'] != BUTTON_DOWN && prevKeyState['D'] != BUTTON_DOWN) ||
       (keyState[GLFW_KEY_RIGHT] == BUTTON_DOWN && prevKeyState[GLFW_KEY_RIGHT] != BUTTON_DOWN)) {
    if(x < 8)
      x++;
  }
}
