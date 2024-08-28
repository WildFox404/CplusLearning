#include<iostream>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员
class Person{
public:
    static void func(){
        cout<<"被调用了静态成员函数static void func"<<endl;
        all=100;
    }

    static int all;
private:
    static void func2(){
        cout<<"被调用了私有的静态成员函数private static void func2"<<endl;
    }
};
int Person::all=0;
void test(){
    //通过对象访问
    Person p;
    p.func();

    //通过类名访问
    Person::func();

    Person p2;
    cout<<"p2.all="<<p2.all<<endl;

    //这里会报错，因为它是私有的
    //Person::func2();
}
int main(){
    test();
    return 0;
}
