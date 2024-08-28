#include<iostream>
using namespace std;

int main(){
    int a=10086;
    int b=114514;
    //常量指针：
    //特点：指针可以被修改
    //但指针指向的值不能被修改
    const int * p1 = &a;
    p1 = &b;
    cout<<"*p1:"<<*p1<<endl;

    //指针常量：
    //特点：指针不能被修改
    //但指针指向的值可以被修改
    int * const p2 = &a;
    *p2 = 20;
    cout<<"*p2:"<<*p2<<endl;

    //常量指针常量：
    //指针和指针指向的值都不能被修改
    const int * const p3 = &a;
    cout<<"*p3:"<<*p3<<endl;

    return 0;
}