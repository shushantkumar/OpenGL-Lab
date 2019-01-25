#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

double pi = 3.14159265358979323; 

void circlefilled (void)  
{ 
    glClear(GL_COLOR_BUFFER_BIT); 
    glBegin(GL_LINES); 
    float x, y, i; 
    float r = 0.5;
    for ( i = 0; i < (2 * pi); i += 0.001) 
    { 
        
        x = r * cos(i); 
        y = r * sin(i); 

        glColor3f(0.0,1.0,1.0);
        glVertex2f(0.0,0.0);
          
        glColor3f(0.0,1.0,1.0);
        glVertex2f(x,y);
    } 
    glEnd(); 
    glFlush(); 
} 

void circleunfilled (void)  
{ 
    glClear(GL_COLOR_BUFFER_BIT); 
    glBegin(GL_POINTS); 
    float x, y, i; 
    float r = 0.5;
    for ( i = 0; i < (2 * pi); i += 0.01) 
    { 
        
        x = r * cos(i); 
        y = r * sin(i); 

   
          
        glColor3f(0.0,1.0,1.0);
        glVertex2f(x,y);
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
    glutDisplayFunc(circlefilled);
    glutMainLoop();
    return 0;
}