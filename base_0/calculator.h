#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <string>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
namespace Ui {
class calculator;
}

class calculator : public QWidget
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;
    QString expression;
    //void on_Button_clicked(const std::string&str);
    QList<QWidget*> m_buttons;
    // 或者使用 QObjectList
    // QObjectList m_buttons;
    double solve(std::string &str);
    void collectButtonObjects();// 在这里添加代码来收集 UI 中的 button 对象

};

#endif // CALCULATOR_H
