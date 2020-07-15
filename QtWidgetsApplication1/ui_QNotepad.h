/********************************************************************************
** Form generated from reading UI file 'QNotepadm11780.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QNOTEPADM11780_H
#define QNOTEPADM11780_H

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

class Ui_QNotepadClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QNotepadClass)
    {
        if (QNotepadClass->objectName().isEmpty())
            QNotepadClass->setObjectName(QStringLiteral("QNotepadClass"));
        QNotepadClass->resize(600, 400);
        centralWidget = new QWidget(QNotepadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QNotepadClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QNotepadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QNotepadClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QNotepadClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QNotepadClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QNotepadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QNotepadClass->setStatusBar(statusBar);

        retranslateUi(QNotepadClass);

        QMetaObject::connectSlotsByName(QNotepadClass);
    } // setupUi

    void retranslateUi(QMainWindow *QNotepadClass)
    {
        QNotepadClass->setWindowTitle(QApplication::translate("QNotepadClass", "QNotepad", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QNotepadClass: public Ui_QNotepadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QNOTEPADM11780_H
