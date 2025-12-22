#include "gtransform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gtransform w;
    w.show();
    return a.exec();
}
