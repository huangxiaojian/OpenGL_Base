#include "OpenGL.h"


GLWidget::GLWidget(QWidget *parent):QGLWidget(parent)
{

}

GLWidget::~GLWidget()
{

}

void GLWidget::initializeGL()
{
	glClearColor(1.0f, 0.0f, 0.0f, 0.0f);
	//glEnable(GL_DEPTH_TEST);
}

void GLWidget::resizeGL(int w, int h)
{
	//glViewport(0, 0, (GLsizei)w, (GLsizei)h);
}

void GLWidget::paintGL()
{
	renderText(20, 100, "Hello, My first OpenGL app.");
	
	//clear color
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();
	//gluPerspective()

	//glMatrixMode(GL_MODELVIEW);
	//glLoadIdentity();
	//gluLookAt()

	//glColor3f(1.0f, 0.0f, 0.0f);
	//glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
}