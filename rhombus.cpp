#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void Rhombus() {

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.0, 0.3);
        glVertex2f(0.7, 0.0);
        glVertex2f(0.0, -0.3);
        glVertex2f(-0.7, 0.0);
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
    glutDisplayFunc(Rhombus);
    glutMainLoop();
    return 0;
}