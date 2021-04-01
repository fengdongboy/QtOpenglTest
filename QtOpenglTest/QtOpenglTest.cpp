#include "QtOpenglTest.h"
#include "GlView.h"

QtOpenglTest::QtOpenglTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	GLView* w = new GLView;
	w->show();
}
