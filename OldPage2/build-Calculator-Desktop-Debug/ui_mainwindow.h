/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *action_Logout;
    QAction *action_Close;
    QAction *actionE_xit;
    QAction *action_Undo;
    QAction *actionWeight_Densities;
    QAction *actionWeight_Masses;
    QAction *actionTester_Properties;
    QAction *actionLocal_Gravity;
    QAction *actionHygrometer;
    QAction *actionEdit_Defualts;
    QAction *actionEnable_Defaults;
    QAction *actionDisable_Defaults;
    QAction *actionGravity1;
    QAction *actionGravity2;
    QAction *actionGravity3;
    QAction *actionGravity4;
    QAction *actionPressure;
    QAction *actionMass;
    QAction *actionPressure_2;
    QAction *actionMass_2;
    QAction *actionDensity;
    QAction *actionForce;
    QAction *actionHumidity;
    QAction *actionTemperature;
    QAction *actionPower;
    QAction *actionGravity;
    QAction *actionArea;
    QAction *actionLength;
    QAction *actionEdit_Screen;
    QAction *actionEnvironment_Screen;
    QAction *actionCalc_Screen;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *action_IDWT;
    QAction *actionSet_Environment;
    QWidget *centralWidget;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *sixButton;
    QPushButton *threeButton;
    QPushButton *twoButton;
    QPushButton *oneButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *zeroButton;
    QPushButton *additionButton;
    QPushButton *subtractionButton;
    QPushButton *clearButton;
    QPushButton *equalsButton;
    QPushButton *multiplicationButton;
    QPushButton *divisionButton;
    QPushButton *decimalButton;
    QLabel *firstLabel;
    QLabel *secondLabel;
    QLineEdit *lineEdit;
    QFrame *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(255, 381);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        action_Logout = new QAction(MainWindow);
        action_Logout->setObjectName(QStringLiteral("action_Logout"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        actionWeight_Densities = new QAction(MainWindow);
        actionWeight_Densities->setObjectName(QStringLiteral("actionWeight_Densities"));
        actionWeight_Masses = new QAction(MainWindow);
        actionWeight_Masses->setObjectName(QStringLiteral("actionWeight_Masses"));
        actionTester_Properties = new QAction(MainWindow);
        actionTester_Properties->setObjectName(QStringLiteral("actionTester_Properties"));
        actionLocal_Gravity = new QAction(MainWindow);
        actionLocal_Gravity->setObjectName(QStringLiteral("actionLocal_Gravity"));
        actionHygrometer = new QAction(MainWindow);
        actionHygrometer->setObjectName(QStringLiteral("actionHygrometer"));
        actionHygrometer->setEnabled(false);
        actionEdit_Defualts = new QAction(MainWindow);
        actionEdit_Defualts->setObjectName(QStringLiteral("actionEdit_Defualts"));
        actionEnable_Defaults = new QAction(MainWindow);
        actionEnable_Defaults->setObjectName(QStringLiteral("actionEnable_Defaults"));
        actionDisable_Defaults = new QAction(MainWindow);
        actionDisable_Defaults->setObjectName(QStringLiteral("actionDisable_Defaults"));
        actionGravity1 = new QAction(MainWindow);
        actionGravity1->setObjectName(QStringLiteral("actionGravity1"));
        actionGravity2 = new QAction(MainWindow);
        actionGravity2->setObjectName(QStringLiteral("actionGravity2"));
        actionGravity3 = new QAction(MainWindow);
        actionGravity3->setObjectName(QStringLiteral("actionGravity3"));
        actionGravity4 = new QAction(MainWindow);
        actionGravity4->setObjectName(QStringLiteral("actionGravity4"));
        actionPressure = new QAction(MainWindow);
        actionPressure->setObjectName(QStringLiteral("actionPressure"));
        actionMass = new QAction(MainWindow);
        actionMass->setObjectName(QStringLiteral("actionMass"));
        actionPressure_2 = new QAction(MainWindow);
        actionPressure_2->setObjectName(QStringLiteral("actionPressure_2"));
        actionMass_2 = new QAction(MainWindow);
        actionMass_2->setObjectName(QStringLiteral("actionMass_2"));
        actionDensity = new QAction(MainWindow);
        actionDensity->setObjectName(QStringLiteral("actionDensity"));
        actionForce = new QAction(MainWindow);
        actionForce->setObjectName(QStringLiteral("actionForce"));
        actionHumidity = new QAction(MainWindow);
        actionHumidity->setObjectName(QStringLiteral("actionHumidity"));
        actionTemperature = new QAction(MainWindow);
        actionTemperature->setObjectName(QStringLiteral("actionTemperature"));
        actionPower = new QAction(MainWindow);
        actionPower->setObjectName(QStringLiteral("actionPower"));
        actionGravity = new QAction(MainWindow);
        actionGravity->setObjectName(QStringLiteral("actionGravity"));
        actionArea = new QAction(MainWindow);
        actionArea->setObjectName(QStringLiteral("actionArea"));
        actionLength = new QAction(MainWindow);
        actionLength->setObjectName(QStringLiteral("actionLength"));
        actionEdit_Screen = new QAction(MainWindow);
        actionEdit_Screen->setObjectName(QStringLiteral("actionEdit_Screen"));
        actionEnvironment_Screen = new QAction(MainWindow);
        actionEnvironment_Screen->setObjectName(QStringLiteral("actionEnvironment_Screen"));
        actionCalc_Screen = new QAction(MainWindow);
        actionCalc_Screen->setObjectName(QStringLiteral("actionCalc_Screen"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        action_IDWT = new QAction(MainWindow);
        action_IDWT->setObjectName(QStringLiteral("action_IDWT"));
        actionSet_Environment = new QAction(MainWindow);
        actionSet_Environment->setObjectName(QStringLiteral("actionSet_Environment"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sevenButton = new QPushButton(centralWidget);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setGeometry(QRect(10, 50, 51, 51));
        eightButton = new QPushButton(centralWidget);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setGeometry(QRect(70, 50, 51, 51));
        nineButton = new QPushButton(centralWidget);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setGeometry(QRect(130, 50, 51, 51));
        sixButton = new QPushButton(centralWidget);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setGeometry(QRect(130, 110, 51, 51));
        threeButton = new QPushButton(centralWidget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(130, 170, 51, 51));
        twoButton = new QPushButton(centralWidget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(70, 170, 51, 51));
        oneButton = new QPushButton(centralWidget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(10, 170, 51, 51));
        fourButton = new QPushButton(centralWidget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(10, 110, 51, 51));
        fiveButton = new QPushButton(centralWidget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(70, 110, 51, 51));
        zeroButton = new QPushButton(centralWidget);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setGeometry(QRect(10, 230, 51, 51));
        additionButton = new QPushButton(centralWidget);
        additionButton->setObjectName(QStringLiteral("additionButton"));
        additionButton->setGeometry(QRect(130, 230, 51, 51));
        subtractionButton = new QPushButton(centralWidget);
        subtractionButton->setObjectName(QStringLiteral("subtractionButton"));
        subtractionButton->setGeometry(QRect(190, 230, 51, 51));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(190, 50, 51, 51));
        equalsButton = new QPushButton(centralWidget);
        equalsButton->setObjectName(QStringLiteral("equalsButton"));
        equalsButton->setGeometry(QRect(130, 290, 111, 51));
        multiplicationButton = new QPushButton(centralWidget);
        multiplicationButton->setObjectName(QStringLiteral("multiplicationButton"));
        multiplicationButton->setGeometry(QRect(190, 170, 51, 51));
        divisionButton = new QPushButton(centralWidget);
        divisionButton->setObjectName(QStringLiteral("divisionButton"));
        divisionButton->setGeometry(QRect(190, 110, 51, 51));
        decimalButton = new QPushButton(centralWidget);
        decimalButton->setObjectName(QStringLiteral("decimalButton"));
        decimalButton->setGeometry(QRect(70, 230, 51, 51));
        firstLabel = new QLabel(centralWidget);
        firstLabel->setObjectName(QStringLiteral("firstLabel"));
        firstLabel->setGeometry(QRect(20, 300, 91, 16));
        secondLabel = new QLabel(centralWidget);
        secondLabel->setObjectName(QStringLiteral("secondLabel"));
        secondLabel->setGeometry(QRect(20, 314, 101, 20));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 0, 231, 41));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 290, 111, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 255, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Jon's Calculator", 0));
        actionNew->setText(QApplication::translate("MainWindow", "&New", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save &As", 0));
        action_Logout->setText(QApplication::translate("MainWindow", "Close &File", 0));
        action_Close->setText(QApplication::translate("MainWindow", "&Logout", 0));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", 0));
        action_Undo->setText(QApplication::translate("MainWindow", "&Undo", 0));
        actionWeight_Densities->setText(QApplication::translate("MainWindow", "Weight Densities", 0));
        actionWeight_Masses->setText(QApplication::translate("MainWindow", "Weight Masses", 0));
        actionTester_Properties->setText(QApplication::translate("MainWindow", "Tester Properties", 0));
        actionLocal_Gravity->setText(QApplication::translate("MainWindow", "Local &Gravities", 0));
        actionHygrometer->setText(QApplication::translate("MainWindow", "Hygrometer", 0));
        actionEdit_Defualts->setText(QApplication::translate("MainWindow", "Edit Defualts", 0));
        actionEnable_Defaults->setText(QApplication::translate("MainWindow", "Enable Defaults", 0));
        actionDisable_Defaults->setText(QApplication::translate("MainWindow", "Disable Defaults", 0));
        actionGravity1->setText(QApplication::translate("MainWindow", "Gravity1", 0));
        actionGravity2->setText(QApplication::translate("MainWindow", "Gravity2", 0));
        actionGravity3->setText(QApplication::translate("MainWindow", "Gravity3", 0));
        actionGravity4->setText(QApplication::translate("MainWindow", "Gravity4", 0));
        actionPressure->setText(QApplication::translate("MainWindow", "Pressure", 0));
        actionMass->setText(QApplication::translate("MainWindow", "Mass", 0));
        actionPressure_2->setText(QApplication::translate("MainWindow", "Pressure", 0));
        actionMass_2->setText(QApplication::translate("MainWindow", "Mass", 0));
        actionDensity->setText(QApplication::translate("MainWindow", "Density", 0));
        actionForce->setText(QApplication::translate("MainWindow", "Force", 0));
        actionHumidity->setText(QApplication::translate("MainWindow", "Humidity", 0));
        actionTemperature->setText(QApplication::translate("MainWindow", "Temperature", 0));
        actionPower->setText(QApplication::translate("MainWindow", "Power", 0));
        actionGravity->setText(QApplication::translate("MainWindow", "Gravity", 0));
        actionArea->setText(QApplication::translate("MainWindow", "Area", 0));
        actionLength->setText(QApplication::translate("MainWindow", "Length", 0));
        actionEdit_Screen->setText(QApplication::translate("MainWindow", "Edit Screen", 0));
        actionEnvironment_Screen->setText(QApplication::translate("MainWindow", "Environment Screen", 0));
        actionCalc_Screen->setText(QApplication::translate("MainWindow", "Calc Screen", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        action_IDWT->setText(QApplication::translate("MainWindow", "&IDWT", 0));
        actionSet_Environment->setText(QApplication::translate("MainWindow", "Set Environment", 0));
        sevenButton->setText(QApplication::translate("MainWindow", "7", 0));
        eightButton->setText(QApplication::translate("MainWindow", "8", 0));
        nineButton->setText(QApplication::translate("MainWindow", "9", 0));
        sixButton->setText(QApplication::translate("MainWindow", "6", 0));
        threeButton->setText(QApplication::translate("MainWindow", "3", 0));
        twoButton->setText(QApplication::translate("MainWindow", "2", 0));
        oneButton->setText(QApplication::translate("MainWindow", "1", 0));
        fourButton->setText(QApplication::translate("MainWindow", "4", 0));
        fiveButton->setText(QApplication::translate("MainWindow", "5", 0));
        zeroButton->setText(QApplication::translate("MainWindow", "0", 0));
        additionButton->setText(QApplication::translate("MainWindow", "+", 0));
        subtractionButton->setText(QApplication::translate("MainWindow", "-", 0));
        clearButton->setText(QApplication::translate("MainWindow", "C", 0));
        equalsButton->setText(QApplication::translate("MainWindow", "=", 0));
        multiplicationButton->setText(QApplication::translate("MainWindow", "*", 0));
        divisionButton->setText(QApplication::translate("MainWindow", "/", 0));
        decimalButton->setText(QApplication::translate("MainWindow", ".", 0));
        firstLabel->setText(QApplication::translate("MainWindow", "Jonathan's", 0));
        secondLabel->setText(QApplication::translate("MainWindow", "Calculator", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
