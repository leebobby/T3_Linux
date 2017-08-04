#include "main_desktop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    main_desktop w;
    w.show();

    return a.exec();
}
