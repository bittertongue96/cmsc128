#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <stdio.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("IPark");

    return a.exec();
}
