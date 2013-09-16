#include "OpenGL.h"

#define MOUSEWHEELSCALE 1.0f

GLWidget::GLWidget(int w, int h, QWidget *parent)
	:QGLWidget(parent), sceneWidth(w), sceneHeight(h),
		camFovy(60), camZNear(0.01), camZFar(100.0)
{
	cameraDistance = 2.0f;
	cameraAngleX = 0.0f;
	cameraAngleY = 0.0f;
	pQuadric = gluNewQuadric();
}


GLWidget::~GLWidget()
{
	gluDeleteQuadric(pQuadric);
}

void GLWidget::initializeGL()
{
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_CULL_FACE);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	/* track material ambient and diffuse from surface color */
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

void GLWidget::resizeGL(int w, int h)
{
	sceneWidth = w;
	sceneHeight= h;

	updateGL();
}



void GLWidget::paintGL()
{
	SetView();
	SetCamera(0, 0, 10, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	SetTransform(cameraAngleX, cameraAngleY, cameraDistance, 0, 0, 0);
	gluCylinder(pQuadric, 2, 1, 1, 20, 10);
	renderText(20, 10, "Hello, My first OpenGL app.");
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
	printf("mousePressEvent()\n");
	mouseX = event->x();
	mouseY = event->y();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
	printf("mouseMoveEvent()\n");
	cameraAngleY += (GLfloat)(event->x() - mouseX);
	cameraAngleY += (GLfloat)(event->y() - mouseY);

	mouseX = event->x();
	mouseY = event->y();

	updateGL();
}

void GLWidget::wheelEvent(QWheelEvent *event)
{
	printf("wheelEvent()\n");
	cameraDistance += (GLfloat)(event->delta() * MOUSEWHEELSCALE) * 0.125;

	updateGL();
}

void GLWidget::SetView()
{
	glViewport(0, 0, (GLsizei)sceneWidth, (GLsizei)sceneHeight);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(camFovy, (GLdouble)sceneWidth / (GLdouble)sceneHeight, camZNear, camZFar);

	glMatrixMode(GL_MODELVIEW);
}

void GLWidget::SetCamera(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble atX, GLdouble atY, GLdouble atZ)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(eyeX, eyeY, eyeZ,	atX, atY, atZ, 0.0, 1.0, 0.0);
}

void GLWidget::SetTransform(GLfloat pitchAngle, GLfloat yawAngle, GLfloat diatance, GLdouble cx, GLdouble cy, GLdouble cz)
{
	glTranslatef(0, 0, -diatance);    /* push the object away from cam */
	glRotatef(pitchAngle, 1, 0, 0);    /* pitch */
	glRotatef(yawAngle, 0, 1, 0);  /* heading */
	glTranslated(cx, cy, cz);         /* centric */
}
