#include "display.h"

display::display() {

}

void display::changeSection() {
    
}

void display::keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 27:  // ESC key
            exit(0);//exit
            break;
        case 32: //space
            if(Game.isRunning() == false) {
                Game.start();
                Menu.stop();
            } else {
                Game.stop();
                Menu.start();
            }
    }
}

void display::specialKeys(int key, int x, int y) {

}

void display::mouse(int button, int state, int x, int y) {

}

void display::draw() {

  
    Game.draw();
  
    glutSwapBuffers(); 
}

void display::setup(){
    
  
}
