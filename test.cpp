#include <GL/glut.h>
#include <GL/gl.h>
 
void lines(){
    glClear(GL_COLOR_BUFFER_BIT); //clearing the screen
    // Between glBegin and glEnd write the code
    glBegin(GL_LINES);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.0);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.5);

        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.0);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.5,0.5);

        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.5,0.5);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.5,0.0);
    glEnd();
    glFlush();
} 
void linestrip(){
    glClear(GL_COLOR_BUFFER_BIT); //clearing the screen
    // Between glBegin and glEnd write the code
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.0);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.5);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.5,0.5);

        // glColor3f(0.0,1.0,1.0);
        // glVertex2f(0.0,0.0);
        

        // glColor3f(0.0,1.0,1.0);
        // glVertex2f(0.5,0.5);
        // glColor3f(0.0,1.0,1.0);
        // glVertex2f(0.5,0.0);
    glEnd();
    glFlush();
} 

void lineloop(){
    glClear(GL_COLOR_BUFFER_BIT); //clearing the screen
    // Between glBegin and glEnd write the code
    glBegin(GL_LINE_LOOP);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.0);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.5);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.5,0.5);

        // glColor3f(0.0,1.0,1.0);
        // glVertex2f(0.0,0.0);
        

        // glColor3f(0.0,1.0,1.0);
        // glVertex2f(0.5,0.5);
        // glColor3f(0.0,1.0,1.0);
        // glVertex2f(0.5,0.0);
    glEnd();
    glFlush();
} 

void points(){
    glClear(GL_COLOR_BUFFER_BIT); //clearing the screen
    // Between glBegin and glEnd write the code
    glBegin(GL_POINTS);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.0);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.5);
    glEnd();
    glFlush();
}


void triangles(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5, 0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.5, 0.5);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 0.5);

        glColor3f(1.0,0.0,0.0);
        glVertex2f(-1.0, 0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.0, 0.0);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 1.0);
        // glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}

void trianglestrip(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_STRIP);
        // glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5, 0.0);
        // glColor3f(0.0,1.0,0.0);
        glVertex2f(0.5, 0.5);
        // glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 0.5);
        // glColor3f(1.0,0.0,0.0);
        glVertex2f(-1.0, 0.0);
        // glColor3f(0.0,1.0,0.0);
        glVertex2f(0.0, 0.0);
        // glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 1.0);
        // glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}

void trianglefan(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
        // glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5, 0.0);
        // glColor3f(0.0,1.0,0.0);
        glVertex2f(0.5, 0.5);
        // glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 0.5);
        // glColor3f(1.0,0.0,0.0);
        glVertex2f(-1.0, 0.0);
        // glColor3f(0.0,1.0,0.0);
        glVertex2f(0.0, 0.0);
        // glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 1.0);
        // glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}


void quads(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5, 0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.5, 0.5);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 0.5);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-1.0, 0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.0, 0.0);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 1.0);
        // glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}

void quadstrip(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5, 0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.5, 0.5);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 0.5);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-1.0, 0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.0, 0.0);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 1.0);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(2.0, 1.0);
        glColor3f(1.0,0.0,1.0);
        glVertex2f(0.0, 2.0);
        // glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}

void polygon(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(0.5, 0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(0.5, 0.6);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0, 0.5);
        glColor3f(0.0,1.0,1.0);
        glVertex2f(-0.1, 0.5);
        glColor3f(1.0,0.0,1.0);
        glVertex2f(0.1, -0.5);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(900, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL");
    glutDisplayFunc(polygon);
    glutMainLoop();
    return 0;
}