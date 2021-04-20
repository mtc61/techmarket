#include "tek_mar.h"
#include <QDataStream>


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TEK_MAR w;
    w.show();
    return a.exec();
}
