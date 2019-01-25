#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

double PI = 3.14159265358979323;

void drawHendecagon() {

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        for(int theta=0; theta<11; theta++) {
            double ang = (theta / 11.0 * 360.0) * PI / 180;
            double r = 0.5;
            glVertex2f(r * cos(ang), r * sin(ang));
        }
    glEnd();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL");
    glutDisplayFunc(drawHendecagon);
    glutMainLoop();
    return 0;
}