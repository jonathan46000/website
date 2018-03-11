#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

#include "ui_mainwindow.h"
#include "calculator.h"

class MainWindow : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);

public slots:
    void number0();//these slots send numbers to the calculator class form buttons pushed in interace
    void number1();
    void number2();
    void number3();
    void number4();
    void number5();
    void number6();
    void number7();
    void number8();
    void number9();
    void opSum();//these slots send operands to the calculator class from buttons
    void opDiff();
    void opMult();
    void opDiv();
    void decimal();//see number slots
    void clear();//sends signal to clear function from button
    void evaluate();//sends signal to calculate function
    void display(QString);//receives display data from calculator class

signals:

    void toNumber(char);//sends digits to calculator class
    void toOp(char);//sends operands to calculator class
    void clr();//sends clear signal to calc class
    void eval();//sends calculate signal to calc class

private:


};

#endif // MAINWINDOW_H
