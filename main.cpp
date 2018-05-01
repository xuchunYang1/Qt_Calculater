#include "calculater.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculater w;
    w.show();

    return a.exec();
}
