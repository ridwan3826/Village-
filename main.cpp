#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
int x=100;
int y=200;
int s=50;
int r=50;
float red = 0.0f, green = 0.0f, blue = 0.0f;
void init()
{



    //glClearColor(128.0f/255.0f,0, 0, 1.0f);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();


  // setting window dimension in X- and Y- direction

  glClearColor(0.0, 0.0, 1.0, 0.0);
  gluOrtho2D(0, 500, 0, 500);

  // setting window dimension in X- and Y- direction
  //glOrtho(0, 500, 0, 500, -10.0, 10.0);
    //glOrtho(0, 500, 0, 500, -10.0, 10.0);
}
void circle(float x1,float y1,float rx, float ry)
{
    float x2,y2;

    //glBegin(GL_POLYGON);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,233,0); //Center Color of Circle
glVertex2f(x1,y1); //Center Vertex
int angle;
for (angle=0;angle<=360;angle++) //0,90,180,270
{
    glColor3ub(255,164,0); //Edge color of Circle
    x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
    y2 = y1+ry*cos((angle*3.1416)/180);
    glVertex2f(x2,y2);
}

glEnd();

}
void circle_kon(int h, int k, int rx,int ry)    //Works

{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
  //glColor3ub(0,102,0);

    glBegin(GL_POLYGON);
        for(int i=1;i<=360;i++)     //360 kon
        {                //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
            glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
        }                                                                      //3.14159*i/180   convert degree to radian


    glFlush();

}
void cloud( int x,int y){
  glColor3ub(255,255,255);
circle_kon(x+250, y+200, 30, 30);
glEnd();
glColor3ub(255,255,255);
circle_kon(x+280, y+190, 30, 30);
glEnd();
glColor3ub(255,255,255);
circle_kon(x+300, y+200, 30, 30);
glEnd();

glColor3ub(255,255,255);
circle_kon(x+270, y+220, 20, 20);
glEnd();
//glFlush();
}
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

/*sky,sun,cloud*/
glColor3ub(81,153,255);
glBegin(GL_POLYGON);
glVertex2d (500, 250);
glVertex2d (500,500);
glVertex2d (0,500);
glVertex2d (0,250);
glEnd();
//circle(s+100, r+370, 30, 30);
//cloud(x,y);
//cloud(x-50,y+50);
/*river*/
glColor3ub(0,104,204);
glPointSize(50.0);
glBegin(GL_POLYGON);
glVertex2d (500, 0);
glVertex2d (500,170);
glVertex2d (0,75);
glVertex2d (0,0);
glEnd();

/*field*/
glColor3ub(81,154,0);
glBegin(GL_POLYGON);
glVertex2d (500, 250);
glVertex2d (0,250);
glVertex2d (0,75);
glVertex2d (500,170);
glEnd();


/*mountain*/
glColor3ub(104,102,0);
glBegin(GL_POLYGON);
glVertex2d (45, 250);
glVertex2d (45,275);
glVertex2d (30,315);
glVertex2d (0,275);
glVertex2d (0,250);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (100, 250);
glVertex2d (100,275);
glVertex2d (80,315);
glVertex2d (45,275);
glVertex2d (45,250);
glEnd();
glColor3ub(104,102,0);
glBegin(GL_POLYGON);
glVertex2d (188, 250);
glVertex2d (188,275);
glVertex2d (130,330);
glVertex2d (100,275);
glVertex2d (100,250);
glEnd();
glColor3ub(104,102,0);
glBegin(GL_POLYGON);
glVertex2d (265, 250);
glVertex2d (265,275);
glVertex2d (225,345);
glVertex2d (188,275);
glVertex2d (188,250);
glEnd();
glColor3ub(104,102,0);
glBegin(GL_POLYGON);
glVertex2d (380, 250);
glVertex2d (380,275);
glVertex2d (315,335);
glVertex2d (265,275);
glVertex2d (265,250);
glEnd();
glColor3ub(104,102,0);
glBegin(GL_POLYGON);
glVertex2d (445, 250);
glVertex2d (445,275);
glVertex2d (410,315);
glVertex2d (380,275);
glVertex2d (380,250);
glEnd();
glColor3ub(104,102,0);
glBegin(GL_POLYGON);
glVertex2d (500, 250);
glVertex2d (500,285);
glVertex2d (480,315);
glVertex2d (445,275);
glVertex2d (445,250);
glEnd();

/*tree*/
glColor3ub(0,102,0);
glBegin(GL_TRIANGLES);
glVertex2d (150,160);
glVertex2d (130,195);
glVertex2d (110,160);
glEnd();
glColor3ub(0,102,0);
glBegin(GL_TRIANGLES);
glVertex2d (150,170);
glVertex2d (130,205);
glVertex2d (110,170);

glEnd();
glColor3ub(0,102,0);
glBegin(GL_TRIANGLES);
glVertex2d (150,180);
glVertex2d (130,215);
glVertex2d (110,180);

glEnd();
glColor3ub(102,51,0);
glBegin(GL_QUADS);
glVertex2d (128,160);
glVertex2d (132,160);
glVertex2d (132,130);
glVertex2d (128,130);
glEnd();
//fruits

glColor3ub(0,0,0);
glPointSize(70.0);
glBegin(GL_LINES);

glVertex2d (130,160);
glVertex2d (130,150);
glEnd();

glColor3ub(0,0,0);
glPointSize(70.0);
glBegin(GL_LINES);

glVertex2d (140,160);
glVertex2d (140,150);
glEnd();
glColor3ub(0,0,0);
glPointSize(70.0);
glBegin(GL_LINES);

glVertex2d (120,160);
glVertex2d (120,150);
glEnd();
/*2nd tree*/
glColor3ub(0,102,0);
glBegin(GL_TRIANGLES);
glVertex2d (196,195);
glVertex2d (176,225);
glVertex2d (156,195);
glEnd();

glColor3ub(0,102,0);
glBegin(GL_TRIANGLES);
glVertex2d (196,207);
glVertex2d (176,247);
glVertex2d (156,207);
glEnd();

glColor3ub(0,102,0);
glBegin(GL_TRIANGLES);
glVertex2d (196,227);
glVertex2d (176,265);
glVertex2d (156,227);
glEnd();
glColor3ub(0,102,0);

glColor3ub(102,51,0);
glBegin(GL_QUADS);
glVertex2d (172,195);
glVertex2d (175,195);
glVertex2d (175,150);
glVertex2d (172,150);

glEnd();

glColor3ub(255,0,0);
circle_kon(x+30,y-55,5,5);
glEnd();
glColor3ub(255,0,0);
circle_kon(x+20,y-55,5,5);
glEnd();
glColor3ub(255,0,0);
circle_kon(x+40,y-55,5,5);
glEnd();
glColor3ub(255,0,0);
circle_kon(x+40,y-20,5,5);
glEnd();
glColor3ub(255,0,0);
circle_kon(x+20,y-20,5,5);
glEnd();
glColor3ub(255,0,0);
circle_kon(x+30,y-20,5,5);
glEnd();
glColor3ub(255,0,0);

circle_kon(x+60,y-5,3,5);
glEnd();
glColor3ub(255,0,0);

circle_kon(x+80,y-5,3,5);
glEnd();
glColor3ub(255,0,0);

circle_kon(x+80,y+30,3,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+63,y-5,2,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+55,y-5,2,5);
glEnd();
circle_kon(x+59,y-13,2,5);
glEnd();
glColor3ub(255,255,0);
circle_kon(x+59,y,2,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+83,y-5,3,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+75,y-5,2,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+79,y,2,5);
glEnd();
circle_kon(x+79,y-13,2,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+81,y+25,2,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+75,y+30,2,5);
glEnd();
glColor3ub(255,255,0);

circle_kon(x+83,y+35,2,5);
glEnd();

glColor3ub(255,255,0);

circle_kon(x+78,y+38,2,5);
glEnd();

/* don't wait!

* start processing buffered OpenGL routines
*/
if(y>=0){

y--;

}


glFlush ();
}

/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
void changeColor(int value) {
   // Set new background color to red
    red = 0.0235;
   green =  0.0118;
   blue = 0.5529;
   // Set new background color
   glClearColor(red, green, blue, 1.0);

   // Call this function again after 1000 milliseconds
   glutTimerFunc(10, changeColor, 0);

   // Redraw the scene
   glutPostRedisplay();
}

void update(int val) {



  glutPostRedisplay();
  glutTimerFunc(60,update, 0);
   //glutTimerFunc(1000, changeColor, 0);

}

int main(int argc, char** argv)
{


glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (1000, 0);
    //glutCreateWindow("No Redisplay Repeat");
    glutCreateWindow ("Ridwan_202-15-3826");
    init ();
    glutDisplayFunc(display);
    glutTimerFunc(60,update,0);
    //glutTimerFunc(10, changeColor, 0);
   //update(0);

    glutMainLoop();



}
