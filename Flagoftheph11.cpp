#include <GL/glut.h> // OpenGL Utility ToolKit Library
void display(); //declare a function
void reshape(int, int);
int main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB); //sets diplay to rgb
glutInitWindowPosition(300,100); //position of the program in your screen
glutInitWindowSize(600,500); //size of the program window
 glutCreateWindow("Flag of the PHILIPPINES"); //window title
glutDisplayFunc(display);//call display function
glutReshapeFunc(reshape);
glutMainLoop(); //loop all functions
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT); //Indicates the buffers currently enabled for color writing.
glLoadIdentity();//reset all matrix
//creating a triangle primitive
glBegin(GL_TRIANGLES);
//Bot
glColor3f(1,0,0);
glVertex2f(0,0);
glVertex2f(3,-3);
glVertex2f(-3,-3);

glVertex2f(6,0);
glVertex2f(6,-3);
glVertex2f(3,-3);

glVertex2f(-5,0);
glVertex2f(-3,-3);
glVertex2f(-10,-3);

glVertex2f(-3,-3);
glVertex2f(-5,0);
glVertex2f(0,0);

glVertex2f(3,-3);
glVertex2f(6,0);
glVertex2f(0,0);

glColor3f(1,1,1);
glVertex2f(-5,0);
glVertex2f(-10,3);
glVertex2f(-10,-3);

glColor3f(0,0,1);
glVertex2f(0,0);
glVertex2f(6,3);
glVertex2f(6,0);

glVertex2f(0,3);
glVertex2f(6,3);
glVertex2f(0,0);

glVertex2f(0,3);
glVertex2f(-5,0);
glVertex2f(0,0);

glVertex2f(-5,0);
glVertex2f(0,3);
glVertex2f(-10,3);

glColor3f(1,1,0);
glVertex2f(-9,0.5);
glVertex2f(-9,-0.5);
glVertex2f(-8,-0.5);

glVertex2f(-9,0.5);
glVertex2f(-8,-0.5);
glVertex2f(-8,0.5);

glVertex2f(-6.5,0.3);
glVertex2f(-6.5,-0.3);
glVertex2f(-6,-0.3);

glVertex2f(-6.5,0.3);
glVertex2f(-6,0.3);
glVertex2f(-6,-0.3);

glVertex2f(-9.7,-1.5);
glVertex2f(-9.7,-2);
glVertex2f(-9.1,-1.5);

glVertex2f(-9.1,-1.5);
glVertex2f(-9.7,-2);
glVertex2f(-9.1,-2);

glVertex2f(-9.1,1.5);
glVertex2f(-9.7,2);
glVertex2f(-9.1,2);

glVertex2f(-9.7,1.5);
glVertex2f(-9.7,2);
glVertex2f(-9.1,1.5);

glEnd();//ending the creation
glFlush();// force execution of GL commands in finite time
}
void reshape(int w, int h)
{
glViewport(0,0, (GLsizei)w, (GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();//reset matrixes
gluOrtho2D(-10,10,-10,10);//size of the world
glMatrixMode(GL_MODELVIEW);
}
