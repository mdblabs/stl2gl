#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <sys/socket.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


using namespace std;

void drawScene()
{
	glClearColor( 0.5f, 0.5f, 0.5f,1.0f);
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	
	glPointSize(20);
	
	//Codigo generado automaticamente
	//Mediante script stl2gl
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.16790f,0.20000f,0.00000f);
		glVertex3f(0.00000f,0.00000f,0.00000f);
		glVertex3f(0.00000f,0.20000f,0.00000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.00000f,0.00000f,0.00000f);
		glVertex3f(0.16790f,0.20000f,0.00000f);
		glVertex3f(0.16790f,0.00000f,0.00000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.16790f,0.00000f,0.10000f);
		glVertex3f(0.00000f,0.20000f,0.10000f);
		glVertex3f(0.00000f,0.00000f,0.10000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.00000f,0.20000f,0.10000f);
		glVertex3f(0.16790f,0.00000f,0.10000f);
		glVertex3f(0.16790f,0.20000f,0.10000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.16790f,0.00000f,0.10000f);
		glVertex3f(0.00000f,0.00000f,0.00000f);
		glVertex3f(0.16790f,0.00000f,0.00000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.00000f,0.00000f,0.00000f);
		glVertex3f(0.16790f,0.00000f,0.10000f);
		glVertex3f(0.00000f,0.00000f,0.10000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.00000f,0.20000f,0.10000f);
		glVertex3f(0.00000f,0.00000f,0.00000f);
		glVertex3f(0.00000f,0.00000f,0.10000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.00000f,0.00000f,0.00000f);
		glVertex3f(0.00000f,0.20000f,0.10000f);
		glVertex3f(0.00000f,0.20000f,0.00000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.00000f,0.20000f,0.10000f);
		glVertex3f(0.16790f,0.20000f,0.00000f);
		glVertex3f(0.00000f,0.20000f,0.00000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.16790f,0.20000f,0.00000f);
		glVertex3f(0.00000f,0.20000f,0.10000f);
		glVertex3f(0.16790f,0.20000f,0.10000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.16790f,0.20000f,0.00000f);
		glVertex3f(0.16790f,0.00000f,0.10000f);
		glVertex3f(0.16790f,0.00000f,0.00000f);
	glEnd();
	glBegin( GL_POLYGON);
		glColor3f(1.0f, 0.0f, 0.0f );
		glVertex3f(0.16790f,0.00000f,0.10000f);
		glVertex3f(0.16790f,0.20000f,0.00000f);
		glVertex3f(0.16790f,0.20000f,0.10000f);
	glEnd();
	


	
    glutSwapBuffers();
}


int main(int argc, char** argv)
{
	srand ( time(NULL) );
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	
	glutCreateWindow("Hola mundo OpenGL/GLUT");
	glutDisplayFunc(drawScene);
	glutMainLoop();
	return 1;
}









