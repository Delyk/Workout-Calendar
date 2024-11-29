#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;




    QFile qssStyle(":/css/qss/style.qss");
    qssStyle.open(QFile::ReadOnly);

    QString test = qssStyle.readAll();

    a.setStyleSheet(test);


    w.show();
    return a.exec();
}
