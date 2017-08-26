#include "maniform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ManiForm w;
    w.show();

    return a.exec();
}
