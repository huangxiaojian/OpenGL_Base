#ifndef OPENGL_BASE_H
#define OPENGL_BASE_H

#include <QtWidgets/QMainWindow>
#include <QGridLayout>
#include "ui_opengl_base.h"

#include "OpenGL.h"

class OpenGL_Base : public QMainWindow
{
	Q_OBJECT

public:
	OpenGL_Base(QWidget *parent = 0);
	~OpenGL_Base();

private:
	Ui::OpenGL_BaseClass ui;
	GLWidget *glWidget;
	QGridLayout *mainLayout;

};

#endif // OPENGL_BASE_H
