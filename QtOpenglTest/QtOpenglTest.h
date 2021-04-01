#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtOpenglTest.h"

class QtOpenglTest : public QMainWindow
{
    Q_OBJECT

public:
    QtOpenglTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtOpenglTestClass ui;
};
