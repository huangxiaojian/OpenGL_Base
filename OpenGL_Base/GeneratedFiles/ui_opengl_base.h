/********************************************************************************
** Form generated from reading UI file 'opengl_base.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGL_BASE_H
#define UI_OPENGL_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenGL_BaseClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenGL_BaseClass)
    {
        if (OpenGL_BaseClass->objectName().isEmpty())
            OpenGL_BaseClass->setObjectName(QStringLiteral("OpenGL_BaseClass"));
        OpenGL_BaseClass->resize(600, 400);
        menuBar = new QMenuBar(OpenGL_BaseClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        OpenGL_BaseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenGL_BaseClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OpenGL_BaseClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(OpenGL_BaseClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        OpenGL_BaseClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(OpenGL_BaseClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OpenGL_BaseClass->setStatusBar(statusBar);

        retranslateUi(OpenGL_BaseClass);

        QMetaObject::connectSlotsByName(OpenGL_BaseClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenGL_BaseClass)
    {
        OpenGL_BaseClass->setWindowTitle(QApplication::translate("OpenGL_BaseClass", "OpenGL_Base", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenGL_BaseClass: public Ui_OpenGL_BaseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGL_BASE_H
