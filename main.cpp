#include "hotell.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel();
    label->setWindowTitle("Hotelli Broneering");
    Hotell graafika;
    graafika.show();
    return app.exec();
}
