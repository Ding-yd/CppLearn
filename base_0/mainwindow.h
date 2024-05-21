#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
} //声明命名空间 Ui，Ui中只有一个MainWindow类
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    //MainWindow类以public的形式继承QMainWindow类
public:
    MainWindow(QWidget *parent = nullptr); //构造函数
    ~MainWindow();//析构函数

private:
    Ui::MainWindow *ui;//声明一个MainWindow类 指针ui
    void on_clickedcacel_button();//MainWindow的成员函数
    void on_clickedlogin_button();
    void on_clickedregrester_button();
};
#endif // MAINWINDOW_H
