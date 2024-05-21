#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QProcess>
#include <QMessageBox>
#include "calculator.h"
//编写qt的后台逻辑部分  对mainwindow.h头文件中的类和成员函数进行具体的定义
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{   //
    ui->setupUi(this);//设置ui界面
    connect(ui->calButton,&QPushButton::clicked,this,&MainWindow::on_clickedlogin_button);
    //connect(ui->loginButton,&QPushButton::clicked,this,&MainWindow::on_clickedlogin_button);
    connect(ui->exitButton,&QPushButton::clicked,this,&MainWindow::on_clickedcacel_button);//信号槽与跳转函数 发送方，发送的信号类型，接受方，处理槽函数
    connect(ui->regButton,&QPushButton::clicked,[this](){
        QMessageBox::information(this,"注册","注册信息");
    });//写成lambda函数的形式
}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::on_clickedlogin_button(){
    /* QString text = ui->lineditPassword->text();
    QString text1 = ui->linedeitMember->text();
    std::cout<<"text_line Member = "<<text1.toStdString().data()<<std::endl;
    std::cout<<"text_line Password = "<<text.toStdString().data()<<std::endl;
    QString text = ui->lineditPassword->text();
    QProcess *pro = new QProcess(this);//创建一个子线程
    pro->start(text);*/
    calculator *calwindow = new calculator();
    calwindow->show();//跳转到另一个窗口

}
void MainWindow::on_clickedcacel_button(){
    this->close();//这里的this表示的当前窗口类，进行close操作
}
void MainWindow::on_clickedregrester_button(){

}


