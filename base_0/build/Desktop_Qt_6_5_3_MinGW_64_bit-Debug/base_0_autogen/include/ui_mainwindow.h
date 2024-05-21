/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *linedeitMember;
    QLabel *label_2;
    QLineEdit *lineditPassword;
    QPushButton *exitButton;
    QPushButton *regButton;
    QPushButton *loginButton;
    QPushButton *calButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(521, 371);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 55, 131, 31));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        linedeitMember = new QLineEdit(centralwidget);
        linedeitMember->setObjectName("linedeitMember");
        linedeitMember->setGeometry(QRect(150, 50, 231, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 135, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        lineditPassword = new QLineEdit(centralwidget);
        lineditPassword->setObjectName("lineditPassword");
        lineditPassword->setGeometry(QRect(150, 130, 231, 51));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(290, 210, 91, 31));
        exitButton->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\256\213\344\275\223\";"));
        regButton = new QPushButton(centralwidget);
        regButton->setObjectName("regButton");
        regButton->setGeometry(QRect(160, 250, 221, 21));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(150, 210, 91, 31));
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\256\213\344\275\223\";"));
        calButton = new QPushButton(centralwidget);
        calButton->setObjectName("calButton");
        calButton->setGeometry(QRect(0, 0, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 521, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        regButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        calButton->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
