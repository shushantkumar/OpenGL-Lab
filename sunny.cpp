#include <GL/freeglut.h>
#include <GL/gl.h>
#include <bits/stdc++.h>

#define WIDTH 600
#define HEIGHT 600

using namespace std;

const double PI = 3.14159265358979323;

void scene() {

    glClear(GL_COLOR_BUFFER_BIT);

    // BackGround
    glBegin(GL_POLYGON);
        glColor3f(255.0/255, 232.0/255, 124.0/255);
        glVertex2f(-1.0 ,-1.0 );
        glVertex2f(-1.0 ,1.0);
        glVertex2f(1.0,1.0);
        glVertex2f(1.0,-1.0);
    glEnd();

    // Ground
    glBegin(GL_POLYGON);
        glColor3f(37.0/255, 65.0/255, 23.0/255);
        glVertex2f(-1.0, -0.8);
        glVertex2f(1.0, -0.8);
        glVertex2f(1.0, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3f(250.0/255, 65.0/255, 23.0/255);
        glVertex2f(-1.0, -0.8);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.0, -0.8);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(250.0/255, 65.0/255, 23.0/255);
        glVertex2f(0.0, -0.8);
        glVertex2f(0.5, 0.5);
        glVertex2f(1.0, -0.8);
    glEnd();



///////////////////////////////////////////////////////////////////////////////////
    glBegin(GL_POLYGON);
    glColor3f(94.0/255, 125.0/255, 126.0/255);
        glVertex2f(-0.8, -0.8);
        glVertex2f(-0.5, -0.8);
        glVertex2f(-0.5, -0.3);
        glVertex2f(-0.8, -0.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0/255, 128.0/255, 128.0/255);
        glVertex2f(-0.5, -0.8);
        glVertex2f(-0.0, -0.8);
        glVertex2f(-0.0, -0.3);
        glVertex2f(-0.5, -0.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(181.0/255, 7.0/255, 7.0/255);
        glVertex2f(-0.85, -0.3);
        glVertex2f(-0.45, -0.3);
        glVertex2f(-0.65, -0.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(150.0/255, 180.0/255, 18.0/255);
        glVertex2f(-0.65 + 0.05, -0.20 + 0.05);
        glVertex2f(-0.65 + 0.05, -0.20 - 0.05);
        glVertex2f(-0.65 - 0.05, -0.20 - 0.05);
        glVertex2f(-0.65 - 0.05, -0.20 + 0.05);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(150.0/255, 18.0/255, 18.0/255);
        glVertex2f(-0.45, -0.3);
        glVertex2f(-0.65, -0.0);
        glVertex2f(-0.15, -0.0);
        glVertex2f(0.05, -0.3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(140.0/255, 18.0/255, 18.0/255);
        glVertex2f(-0.71, -0.8);
        glVertex2f(-0.59, -0.8);
        glVertex2f(-0.59, -0.5);
        glVertex2f(-0.71, -0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(140.0/255, 18.0/255, 18.0/255);
        glVertex2f(-0.3, -0.55);
        glVertex2f(-0.1, -0.55);
        glVertex2f(-0.1, -0.35);
        glVertex2f(-0.3, -0.35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(255.0/255, 255.0/255, 255.0/255);
        glVertex2f(-0.27, -0.52);
        glVertex2f(-0.13, -0.52);
        glVertex2f(-0.13, -0.38);
        glVertex2f(-0.27, -0.38);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(140.0/255, 18.0/255, 18.0/255);
        glVertex2f(-0.3, -0.46);
        glVertex2f(-0.1, -0.46);
        glVertex2f(-0.1, -0.44);
        glVertex2f(-0.3, -0.44);
    glEnd();
///////////////////////////////////////////////////////////////////////////////////   


///////////////////////////////////////////////////////////////////////////////////
    // Bus  Body 116, 134, 237
    glBegin(GL_POLYGON);
    glColor3f(116.0/255, 134.0/255, 237.0/255);
        glVertex2f(0.2, -0.7);
        glVertex2f(0.9, -0.7);
        glVertex2f(0.9, -0.35);
        glVertex2f(0.2, -0.35);
    glEnd();

    // Wheels
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(255.0/255, 232.0/255, 124.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.35 + 0.1 * cos(ang), -0.7 + 0.1 * sin(ang));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(40.0/255, 40.0/255, 40.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.35 + 0.08 * cos(ang), -0.72 + 0.08 * sin(ang));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(255.0/255, 232.0/255, 124.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.75 + 0.1 * cos(ang), -0.7 + 0.1 * sin(ang));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(40.0/255, 40.0/255, 40.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.75 + 0.08 * cos(ang), -0.72 + 0.08 * sin(ang));
        }
    glEnd();

    // Windows
    glBegin(GL_POLYGON);
    glColor3f(100.0/255, 100.0/255, 100.0/255);
        glVertex2f(0.2, -0.55);
        glVertex2f(0.25, -0.55);
        glVertex2f(0.25, -0.35);
        glVertex2f(0.2, -0.35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(100.0/255, 100.0/255, 100.0/255);
        glVertex2f(0.35, -0.50);
        glVertex2f(0.45, -0.50);
        glVertex2f(0.45, -0.40);
        glVertex2f(0.35, -0.40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(100.0/255, 100.0/255, 100.0/255);
        glVertex2f(0.50, -0.50);
        glVertex2f(0.60, -0.50);
        glVertex2f(0.60, -0.40);
        glVertex2f(0.50, -0.40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(100.0/255, 100.0/255, 100.0/255);
        glVertex2f(0.65, -0.50);
        glVertex2f(0.75, -0.50);
        glVertex2f(0.75, -0.40);
        glVertex2f(0.65, -0.40);
    glEnd();

    /////////////////////////////////////////////////////////////////


    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            double ang = theta * PI / 180;
            

            glColor3f(255.0/255, 178.0/255, 0.0/255);
            glVertex2f(0.6 + 0.15 * cos(ang), 0.7 + 0.15 * sin(ang));
        }
    glEnd();

    glBegin(GL_LINES);
        for(int theta=0; theta<360; theta+=15) {
            double ang = theta * PI / 180;
            
            int num = rand() % 30 + 20;
            // glColor3f(255.0/255, 178.0/255, 0.0/255);
            while(num--){
                glBegin(GL_LINES);
                glColor3f(255.0/255, 178.0/255, 0.0/255);
                glVertex2f(0.6 + 0.18 * cos(ang), 0.7 + 0.18 * sin(ang));
                glVertex2f(0.6 + 0.22 * cos(ang), 0.7 + 0.22 * sin(ang));
                glEnd();
            }
        }
    glEnd();

    glBegin(GL_LINES);
        for(int theta=0; theta<360; theta++) {
            double ang = theta * PI / 180;
            

            glColor3f(255.0/255, 178.0/255, 0.0/255);
            glVertex2f(0.6 + 0.2 * cos(ang), 0.7 + 0.2 * sin(ang));
        }
    glEnd();




    glFlush();
}


int main(int argc, char **argv) {

    // srand(time(0));

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Scenery");
    glutDisplayFunc(scene);
    glutMainLoop();
}
