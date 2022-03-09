#include "includes/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    w.setWindowTitle("Notepad_Sukanya");
    w.show();

    return a.exec();
}
