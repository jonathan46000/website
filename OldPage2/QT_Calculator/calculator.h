#ifndef calculator_H
#define calculator_H

#include <QObject>
#include <fstream>
#include <cmath>

class calculator : public QObject
{

    Q_OBJECT

private:
    QString tempStr;//this string will accept input from the interface as a string
    QString firstStr;//this string could be used for other stuff later
    int x;//class wide counter

    char operand;//variable to store operand
    double temp;//stores incoming numbers
    double first;//stores numbers stored prior to operand
public:
    //PUBLIC FUNCTIONS
    calculator(QObject *parent = 0);//constructor

public slots:

    void numberReceiver(char);//receives new number character and adds it to string then converts string to number stored in first
    void operandReceiver(char);//recieves and stores new operand stores temp in first sets temp empty
    void calculate();//calculates first with temp based on operand stored
    void clear();//resets all variables

signals:

    void toDisplay(QString);//passes calculation result to screen

};

#endif // calculator_H
