#include <QtGui>
#include <QFile>
#include <QProcess>
#include <iostream>
#include <QtDebug>
#include "mainwindow.h"
#include "calculator.h"


calculator::calculator(QObject *parent) ://constructor sets safe and default values
    QObject(parent)
{
    tempStr = '\0';
    firstStr = '\0';
    x = 0;

    first = 0;
    temp = 0;

    operand = 'N'; // possible operands /, *, -, +, and 0.
}

void calculator::numberReceiver(char nextNumber)//recieves number and stores it in temp
{
    /*************************Clean up string*****************************/
    int y;//used to count from end of numbers to end of string
    int z;//used to find end of string
    for(z=0;tempStr[z]!='\0';z++)//loop find string end

    //place number in next part of array and
    if (tempStr[0]=='0')//places input in first place if first place is zero
        x=0;
    /*********************************************************************/

    tempStr[x] = nextNumber;//if operand button or equal button has not been pressed then everynew button pressed will store the digit in the next character in the array

    /*************************Clean up string*****************************/
    for(y = x+1;y<z;y++)//sets nulls for every character between end of number to end of string
    {
        tempStr[y]='\0';
    }
    /*********************************************************************/

    temp = tempStr.toDouble();//converts string to number
    emit toDisplay(tempStr);//sends number to display
    x++;//increments x so that the next digit is stored in the next character in the array

}

void calculator::operandReceiver(char operandfrom)
{
    x=0;//this will reset x so that new digits store in a new number

    calculate();//calculates values currently stored in temp and first with stored operand.  Temp is replaced with the calculated result and displayed on screen

    first = temp;//moves temp to first
    temp = 0;//clears temp
    //then stores this operand for next calculation
    operand = operandfrom;
}

void calculator::calculate()
{
    if (operand == 'N')//if statements choose which operand to calculate with
    {
        temp = temp;
    }
    else if(operand == '+')
    {
        temp = temp + first;
    }
    else if(operand == '-')
    {
        temp = first - temp;
    }
    else if(operand == '*')
    {
        temp = first * temp;
    }
    else if(operand == '/')
    {
        temp = first / temp;
    }
    else
    {
        temp = 0;
        tempStr = "Error!";
    }
    tempStr = QString::number(temp);//result is stored in the string so that it can be sent to the display
    emit toDisplay(tempStr);//string sent to display

    int z;
    for(z=0;tempStr[z]!='\0';z++)//resets string
    {
        tempStr='\0';
    }
    operand = 'N';
}

void calculator::clear()//clears calculator
{
    tempStr = '\0';
    firstStr = '\0';
    x = 0;
    first = 0;
    temp = 0;
    operand = 'N';
    emit toDisplay("0");
}

