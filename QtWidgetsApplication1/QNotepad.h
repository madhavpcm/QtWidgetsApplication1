#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QNotepad.h"
#include <QFile>

class QNotepad : public QMainWindow
{
    Q_OBJECT

public:
    QNotepad(QWidget *parent = Q_NULLPTR);

private:
    Ui::QNotepadClass ui;
};
