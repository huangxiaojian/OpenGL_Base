#ifndef OPENGL_H
#define OPENGL_H

#include <GL/freeglut.h>
#include <QGLWidget>

class GLWidget: public QGLWidget
{
	Q_OBJECT

public:
	GLWidget(QWidget* parent = 0);
	~GLWidget();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();

private:

};

#endif