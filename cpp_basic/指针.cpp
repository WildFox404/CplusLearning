#include<iostream>
using namespace std;

int main(){
    int a=0;
    cout<<"变量a的地址为:"<<&a<<endl;

    //定义一个指针变量
    //指针变量的定义语法：数据类型 *指针变量名
    int *p;
    //让指针记录变量a的地址
    p = &a;
    cout<<"指针p的值为:"<<p<<endl;

    //使用指针
    //通过解引用可以找到指针所指向的内容
    cout<<"通过解引用得到指针p的值:"<<*p<<endl;
    cout<<"变量a的值为:"<<a<<endl;
    return 0;
}
