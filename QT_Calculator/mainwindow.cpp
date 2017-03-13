#include <QtGui>
#include <QString>
#include <QFile>
#include <QProcess>
#include <iostream>
#include <QtDebug>

#include "mainwindow.h"
#include "calculator.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);//this function sets up the user interface from mainwindow.ui

    calculator *calcObject = new calculator();//creates new instance of calculator class


    //----------------Connect number buttons to their signals-------------------//
    MainWindow::connect(zeroButton, SIGNAL(clicked()),
                        this, SLOT(number0()));
    MainWindow::connect(oneButton, SIGNAL(clicked()),
                        this, SLOT(number1()));
    MainWindow::connect(twoButton, SIGNAL(clicked()),
                        this, SLOT(number2()));
    MainWindow::connect(threeButton, SIGNAL(clicked()),
                        this, SLOT(number3()));
    MainWindow::connect(fourButton, SIGNAL(clicked()),
                        this, SLOT(number4()));
    MainWindow::connect(fiveButton, SIGNAL(clicked()),
                        this, SLOT(number5()));
    MainWindow::connect(sixButton, SIGNAL(clicked()),
                        this, SLOT(number6()));
    MainWindow::connect(sevenButton, SIGNAL(clicked()),
                        this, SLOT(number7()));
    MainWindow::connect(eightButton, SIGNAL(clicked()),
                        this, SLOT(number8()));
    MainWindow::connect(nineButton, SIGNAL(clicked()),
                        this, SLOT(number9()));
    MainWindow::connect(decimalButton, SIGNAL(clicked()),
                        this, SLOT(decimal()));

    //-----------------Connect operator buttons to their signals---------------//
    MainWindow::connect(multiplicationButton, SIGNAL(clicked()),
                        this, SLOT(opMult()));
    MainWindow::connect(divisionButton, SIGNAL(clicked()),
                        this, SLOT(opDiv()));
    MainWindow::connect(additionButton, SIGNAL(clicked()),
                        this, SLOT(opSum()));
    MainWindow::connect(subtractionButton, SIGNAL(clicked()),
                        this, SLOT(opDiff()));

    //------------------------------Clear/Calc--------------------------------//
    MainWindow::connect(equalsButton, SIGNAL(clicked()),
                        this, SLOT(evaluate()));
    MainWindow::connect(clearButton, SIGNAL(clicked()),
                        this, SLOT(clear()));
    MainWindow::connect(this, SIGNAL(clr()),
                        calcObject, SLOT(clear()));
    MainWindow::connect(this, SIGNAL(eval()),
                        calcObject, SLOT(calculate()));

    //-------------------------Send Number/Operand---------------------------//
    MainWindow::connect(this, SIGNAL(toNumber(char)),
                        calcObject, SLOT(numberReceiver(char)));
    MainWindow::connect(this, SIGNAL(toOp(char)),
                        calcObject, SLOT(operandReceiver(char)));

    //-----------------------------Display-----------------------------------//
    MainWindow::connect(calcObject, SIGNAL(toDisplay(QString)),
                        this, SLOT(display(QString)));

}

//these slots send numbers to calc based on which button is clicked
void MainWindow::number0()
{
    emit toNumber('0');
}
void MainWindow::number1()
{
    emit toNumber('1');
}
void MainWindow::number2()
{
    emit toNumber('2');
}
void MainWindow::number3()
{
    emit toNumber('3');
}
void MainWindow::number4()
{
    emit toNumber('4');
}
void MainWindow::number5()
{
    emit toNumber('5');
}
void MainWindow::number6()
{
    emit toNumber('6');
}
void MainWindow::number7()
{
    emit toNumber('7');
}
void MainWindow::number8()
{
    emit toNumber('8');
}
void MainWindow::number9()
{
    emit toNumber('9');
}

//these slots send operands to calc based on which button is clicked
void MainWindow::opSum()
{
    emit toOp('+');
}
void MainWindow::opDiff()
{
    emit toOp('-');
}
void MainWindow::opMult()
{
    emit toOp('*');
}
void MainWindow::opDiv()
{
    emit toOp('/');
}

//see number
void MainWindow::decimal()
{
    emit toNumber('.');
}

//clears calculator based on button click
void MainWindow::clear()
{
    lineEdit->setText("0");
    emit clr();
}

//equals button
void MainWindow::evaluate()
{
    emit eval();
}

//displays data on screen
void MainWindow::display(QString ScreenString)
{
    lineEdit->setText(ScreenString);
}



























