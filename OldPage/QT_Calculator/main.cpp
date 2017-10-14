#include <QApplication>
#include <QMainWindow>

#include "mainwindow.h"
#include "calculator.h"

int main(int argc, char *argv[])
{
    //Main application creates and shows MainWindow
    QApplication app(argc, argv);
    MainWindow *mainwindow = new MainWindow;//This is the new instance of your MainWindow class
    mainwindow->show();//This is an inherited function from QMainWindow that shows the main window

    return app.exec();//This in an inherited function of QApplication that closes the application when maindow->show();
}                      //completes
