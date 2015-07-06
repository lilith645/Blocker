#include "display.h"

display::display(int argc1, char** argv1) {
    argc = argc1;
    argv = argv1;
}


void Timer(int value) {
   int refreshMillis = 100; 
   glutPostRedisplay();    // Post a paint request to activate display()
   glutTimerFunc(refreshMillis, Timer, 0); // subsequent timer call at milliseconds
}

void display::keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 27:  // ESC key
            exit(0);//exit
    }

}

void display::specialKeys(int key, int x, int y) {

}

void display::mouse(int button, int state, int x, int y) {

}

void display::draw() {
    
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glutSwapBuffers(); 
}

void display::setup(){
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutCreateWindow("Blocker"); 
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable( GL_BLEND ); 
    glutFullScreen();

    glutDisplayFunc(draw);
    glutTimerFunc(0, Timer, 0);
       
    glutKeyboardFunc(keyboard); 
    glutSpecialFunc(specialKeys);
    
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glutMainLoop(); 
}
