#include "opengl_base.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OpenGL_Base w;
	w.show();
	return a.exec();
}
