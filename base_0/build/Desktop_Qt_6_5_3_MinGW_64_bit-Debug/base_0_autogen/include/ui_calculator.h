/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QPushButton *Button1;
    QPushButton *Button4;
    QPushButton *leftButton;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *rightButton;
    QPushButton *Button0;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *clearButton;
    QPushButton *Button9;
    QPushButton *addButton;
    QPushButton *reduceButton;
    QPushButton *backButton;
    QPushButton *multiButton;
    QPushButton *exceptButton;
    QPushButton *equalButton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(311, 391);
        Button1 = new QPushButton(calculator);
        Button1->setObjectName("Button1");
        Button1->setGeometry(QRect(20, 260, 61, 51));
        Button4 = new QPushButton(calculator);
        Button4->setObjectName("Button4");
        Button4->setGeometry(QRect(20, 200, 61, 51));
        leftButton = new QPushButton(calculator);
        leftButton->setObjectName("leftButton");
        leftButton->setGeometry(QRect(20, 320, 61, 51));
        Button5 = new QPushButton(calculator);
        Button5->setObjectName("Button5");
        Button5->setGeometry(QRect(90, 200, 61, 51));
        Button6 = new QPushButton(calculator);
        Button6->setObjectName("Button6");
        Button6->setGeometry(QRect(160, 200, 61, 51));
        rightButton = new QPushButton(calculator);
        rightButton->setObjectName("rightButton");
        rightButton->setGeometry(QRect(160, 320, 61, 51));
        Button0 = new QPushButton(calculator);
        Button0->setObjectName("Button0");
        Button0->setGeometry(QRect(90, 320, 61, 51));
        Button2 = new QPushButton(calculator);
        Button2->setObjectName("Button2");
        Button2->setGeometry(QRect(90, 260, 61, 51));
        Button3 = new QPushButton(calculator);
        Button3->setObjectName("Button3");
        Button3->setGeometry(QRect(160, 260, 61, 51));
        Button7 = new QPushButton(calculator);
        Button7->setObjectName("Button7");
        Button7->setGeometry(QRect(20, 140, 61, 51));
        Button8 = new QPushButton(calculator);
        Button8->setObjectName("Button8");
        Button8->setGeometry(QRect(90, 140, 61, 51));
        clearButton = new QPushButton(calculator);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(20, 80, 61, 51));
        Button9 = new QPushButton(calculator);
        Button9->setObjectName("Button9");
        Button9->setGeometry(QRect(160, 140, 61, 51));
        addButton = new QPushButton(calculator);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(90, 80, 61, 51));
        reduceButton = new QPushButton(calculator);
        reduceButton->setObjectName("reduceButton");
        reduceButton->setGeometry(QRect(160, 80, 61, 51));
        reduceButton->setStyleSheet(QString::fromUtf8("font: 290 18pt \"Microsoft JhengHei UI Light\";"));
        backButton = new QPushButton(calculator);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(230, 80, 61, 51));
        multiButton = new QPushButton(calculator);
        multiButton->setObjectName("multiButton");
        multiButton->setGeometry(QRect(230, 140, 61, 51));
        exceptButton = new QPushButton(calculator);
        exceptButton->setObjectName("exceptButton");
        exceptButton->setGeometry(QRect(230, 200, 61, 51));
        equalButton = new QPushButton(calculator);
        equalButton->setObjectName("equalButton");
        equalButton->setGeometry(QRect(230, 260, 61, 111));
        lineEdit = new QLineEdit(calculator);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 271, 51));

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QWidget *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "Form", nullptr));
        Button1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        Button4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        leftButton->setText(QCoreApplication::translate("calculator", "(", nullptr));
        Button5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        rightButton->setText(QCoreApplication::translate("calculator", ")", nullptr));
        Button0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        Button2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        Button3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        Button7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        Button8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        clearButton->setText(QCoreApplication::translate("calculator", "C", nullptr));
        Button9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        addButton->setText(QCoreApplication::translate("calculator", "+", nullptr));
        reduceButton->setText(QCoreApplication::translate("calculator", "-", nullptr));
        backButton->setText(QCoreApplication::translate("calculator", "<-", nullptr));
        multiButton->setText(QCoreApplication::translate("calculator", "*", nullptr));
        exceptButton->setText(QCoreApplication::translate("calculator", "/", nullptr));
        equalButton->setText(QCoreApplication::translate("calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
