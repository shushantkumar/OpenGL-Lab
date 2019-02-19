#include <GL/freeglut.h>
#include <GL/gl.h>
#include <bits/stdc++.h>

#define WIDTH 700
#define HEIGHT 700

using namespace std;

void drawChessBoard() {

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(255.0/255, 0.0/255, 255.0/255);
                glVertex2f(-1.0 ,    1.0 );
                glVertex2f(-1.0 , -1.0);
                glVertex2f(1.0 , -1.0);
                glVertex2f(1.0 ,     1.0);

    glEnd();

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++) {
            glBegin(GL_POLYGON);
                if(((i*8 + j) % 2 && i % 2 == 0) || ((i*8 + j) % 2 == 0 && i % 2))
                    glColor3f(255.0/255, 255.0/255, 255.0/255);
                else
                    glColor3f(0.0/255, 0.0/255, 0.0/255); // Black

                glVertex2f(-0.95 + (j-0.01)/4.0,     0.95 - (i-0.01)/4.0);
                glVertex2f(-0.95 + (j-0.01+1)/4.0, 0.95 - (i-0.01)/4.0);
                glVertex2f(-0.95+ ((j-0.01)+1)/4.0, 0.95 - (i+1-0.01)/4.0);
                glVertex2f(-0.95 + (j-0.01)/4.0,     0.95- (i+1-0.01)/4.0);
            glEnd();
        }
    
    glFlush();
}

int main(int argc, char **argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Chess Board");
    glutDisplayFunc(drawChessBoard);
    glutMainLoop();
}