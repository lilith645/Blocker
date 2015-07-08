#include <stdio.h>
#include "display.h"

display Controller;
int refreshMillis = 100;

void changeScreen() {

}

void Timer(int value) {
   glutPostRedisplay();    // Post a paint request to activate display()
   glutTimerFunc(refreshMillis, Timer, 0); // subsequent timer call at milliseconds
}

void keyboard(unsigned char key, int x, int y) {
    Controller.keyboard(key, x, y);
}

void specialKeys(int key, int x, int y) {
    Controller.specialKeys(key, x, y);
}

void mouse(int button, int state, int x, int y) {
    Controller.mouse(button, state, x, y);
}

void draw() {
    Controller.draw();
    glutSwapBuffers(); 
}

void setup(){
   
}

int main(int argc, char** argv) {
		
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

    return 0;
}
