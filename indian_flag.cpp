#include <GL/freeglut.h>
#include <GL/gl.h>
#include <bits/stdc++.h>

#define WIDTH 600
#define HEIGHT 600

using namespace std;

const double PI = 3.14159265358979323;

void drawFlag() {
    
    glClear(GL_COLOR_BUFFER_BIT);

    // Pole
    glBegin(GL_POLYGON);
        glColor3f(192.0/255, 192.0/255, 192.0/255);
        glVertex2f(-0.6, -0.8);
        glVertex2f(-0.57, -0.8);
        glVertex2f(-0.57, 0.75);
        glVertex2f(-0.6, 0.75);
    glEnd();

    // Upper rectangle
    glBegin(GL_POLYGON);
        glColor3f(255.0/255, 153.0/255, 51.0/255);
        glVertex2f(-0.57, 0.7);
        glVertex2f(0.5, 0.7);
        glVertex2f(0.5, 0.45);
        glVertex2f(-0.57, 0.45);
    glEnd();

    // Middle rectangle
    glBegin(GL_POLYGON);
        glColor3f(255.0/255, 255.0/255, 255.0/255);
        glVertex2f(-0.57, 0.45);
        glVertex2f(0.5, 0.45);
        glVertex2f(0.5, 0.2);
        glVertex2f(-0.57, 0.2);
    glEnd();

    // Lower rectangle
    glBegin(GL_POLYGON);
        glColor3f(18.0/255, 136.0/255, 7.0/255);
        glVertex2f(-0.57, 0.2);
        glVertex2f(0.5, 0.2);
        glVertex2f(0.5, -0.05);
        glVertex2f(-0.57, -0.05);
    glEnd();

    // Circle
    glPointSize(4);
    glBegin(GL_POINTS);
        glColor3f(0.0/255, 0.0/255, 136.0/255);
        for(int th=0; th<360; th++) {
            double ang = th / 360.0 * 2 * PI;
            glVertex2f(0.11 * cos(ang) - 0.03, 0.11 * sin(ang) + 0.325);
        }
    glEnd();

    // Strokes
    glPointSize(2);
    for(int stroke=0; stroke<24; stroke++) {
        double ang = stroke / 24.0 * 2 * PI;
        glBegin(GL_LINES);
            glVertex2f(-0.03, 0.325);
            glVertex2f(-0.03 + 0.1 * cos(ang), 0.325 + 0.1 * sin(ang));
        glEnd();
    }

    glFlush();
}

int main(int argc, char **argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Flag");
    glutDisplayFunc(drawFlag);
    glutMainLoop();
}