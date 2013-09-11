#include "opengl_base.h"

#include <QSizePolicy>

OpenGL_Base::OpenGL_Base(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	glWidget = new GLWidget(ui.centralWidget);

	mainLayout = new QGridLayout();

	QSizePolicy mainSizePolisy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	glWidget->setSizePolicy(mainSizePolisy);
	mainLayout->addWidget(glWidget, 0, 0);

	ui.centralWidget->setLayout(mainLayout);
}

OpenGL_Base::~OpenGL_Base()
{

}
