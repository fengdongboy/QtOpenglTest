#include "QtOpenglTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtOpenglTest w;
    w.show();
    return a.exec();
}
