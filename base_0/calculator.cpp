#include "calculator.h"
#include "ui_calculator.h"
#include <algorithm>
calculator::calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::calculator)
{

    ui->setupUi(this);
    collectButtonObjects();
    connect(ui->backButton,&QPushButton::clicked,[this](){
        expression.chop(1);
        ui->lineEdit->setText(expression);
    });
    connect(ui->clearButton,&QPushButton::clicked,[this](){
        expression.clear();
        ui->lineEdit->setText(expression);
    });
    //=按钮连接到对表达式的处理函数中 ，在这里使用lambda函数进行处理expression
    connect(ui->equalButton,&QPushButton::clicked,[this](){
        std::string &&st= expression.toStdString();//使用右值引用
        double res = solve(st);
        ui->lineEdit->setText(QString::number(res, 'f'));
        expression="";
        //定义两个栈：一个计算符栈，一个数字栈
        /*std::cout<<"expression = "<<expression.toStdString()<<std::endl;
        std::vector<char> oprerator;
        std::vector<char>ope={'+','-','*','/','(',')'};
        std::vector<double> number;
        int i=0,sum=0;
        for(auto str:expression.toStdString()){
            auto it = std::find(ope.begin(),ope.end(),str);//是否是运算符
            if(it!=ope.end()){
                number.push_back(sum);//运算符之前的一个数字入栈
                i=0;sum=0;
                if(str==')'){
                    //从数字栈弹出两个数字进行运算,一直到弹出(或者运算符栈空

                }
                else{
                    oprerator.push_back(str);
                }

            }
            else{
                sum+=pow(10,i)*int(str);
                i++;
            }
        }*/
    });

}

calculator::~calculator()
{
    delete ui;
}

void calculator::collectButtonObjects(){
    //收集Button控件
    auto buttons = findChildren<QPushButton*>(); //返回一个QList<T> 也就是QList<QPushButton*>
    std::vector<std::string> querry={"0","1","2","3","4","5","6","7","8","9","+","-","*","/","(",")"};
    for (QWidget* button : qAsConst(buttons))
    {
        QPushButton* btn = qobject_cast<QPushButton*>(button);
        auto it = std::find(querry.begin(),querry.end(),(btn->text()).toStdString());//是否能查找到容器中的对应元素
        if (btn&&it!=querry.end())
        {
            // 对 button 执行操作
            connect(btn,&QPushButton::clicked,[this,btn](){
                expression= expression+btn->text();
                ui->lineEdit->setText(expression);
            });
        }
    }
}

//计算运算符表达式 https://blog.csdn.net/yaoxunji/article/details/79676744
std::string format(std::string str){
    for(int i = 0;i < str.length(); i++){
        if(str[i] == '-'){
            if(i == 0){
                str.insert(0,1,'0');
            }else if(str[i-1] == '('){
                str.insert(i,1,'0');
            }
        }

    }
    return str;
}

int prior(char c){
    //优先级判断
    if(c == '+' || c == '-'){
        return 1;
    }else if(c == '*' || c == '/'){
        return 2;
    }else{
        return 0;
    }

}

std::vector<std::string> hz(std::string str){
    //中缀表达式 转换为后缀表达式 ，使用栈来完成
    std::vector<std::string> vs;
    std::stack<char> st;
    for(int i = 0;i < str.length(); i++){
        std::string tmp = "";
        switch(str[i]){
        case '+':
        case '-':
        case '*':
        case '/':
            if(st.empty() || st.top() == '('){
                st.push(str[i]);
            }else{
                while(!st.empty() && prior(st.top()) >= prior(str[i]) ){
                    tmp += st.top();
                    vs.push_back(tmp);
                    st.pop();
                    tmp = "";
                }
                st.push(str[i]);
            }
            break;
        case '(':
            st.push(str[i]);
            break;
        case ')':
            while(st.top() != '('){
                tmp += st.top();
                vs.push_back(tmp);
                st.pop();
                tmp = "";
            }
            st.pop();
            break;
        default:
            if((str[i]>='0' && str[i]<='9')){
                tmp += str[i];
                while(i+1<str.size() && str[i+1]>='0' && str[i+1]<='9'||str[i+1] == '.')
                {
                    tmp += str[i+1];//若是连续数字
                    ++i;
                }
                vs.push_back(tmp);
            }
        }
    }
    while(!st.empty()){
        std::string tmp = "";
        tmp += st.top();
        vs.push_back(tmp);
        st.pop();
    }
    return vs;
}
double result(std::vector<std::string> bh){
    std::stack<double> st;
    double num,op1,op2;
    for(int i = 0;i < bh.size(); i++){
        std::string tmp = bh[i];
        if(tmp[0] >= '0'&&tmp[0] <= '9'){
            num = atof(tmp.c_str());
            st.push(num);
        }
        else if(bh[i]=="+")
        {
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1+op2);
        }
        else if(bh[i]=="-")
        {
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1-op2);
        }
        else if(bh[i]=="*")
        {
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1*op2);
        }
        else if(bh[i]=="/")
        {
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1/op2);
        }
    }
    return st.top();
}
double calculator::solve(std::string &str ){

    str = format(str);
    std::vector<std::string> bh = hz(str);
    double k = result(bh);
    return k;
}
