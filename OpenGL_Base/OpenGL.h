#ifndef OPENGL_H
#define OPENGL_H

#include <GL/freeglut.h>
#include <QGLWidget>
#include <QMouseEvent>

class GLWidget: public QGLWidget
{
	Q_OBJECT

public:
	GLWidget(int w, int h, QWidget* parent = 0);

	~GLWidget();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();

	void mouseMoveEvent(QMouseEvent  *event);  
	void mousePressEvent(QMouseEvent  *event);
	//void keyPressEvent(QKeyEvent *event);
	void wheelEvent(QWheelEvent *event);

private:
	void SetView();
	void SetCamera(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble atX, GLdouble atY, GLdouble atZ);
	void SetTransform(GLfloat pitchAngle, GLfloat yawAngle, GLfloat diatance, GLdouble cx, GLdouble cy, GLdouble cz);

	GLUquadricObj* pQuadric;

	int mouseX, mouseY;
	GLfloat cameraAngleX, cameraAngleY;
	GLfloat cameraDistance;

	const GLdouble camFovy, camZNear, camZFar;

	int sceneWidth, sceneHeight;
};

#endif