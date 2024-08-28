#include<iostream>
using namespace std;
//静态成员变量
//所有对象共享一份数据副本
//在编译阶段分配内存
//类内声明，类外初始化

class Person{
public:
    static int All;
private:
//静态成员变量有访问权限
    static int private_All;

};
int Person::All=100;
int Person::private_All=200;
void test(){
    Person p1;
    cout<<"p1的All:"<<p1.All<<endl;

    Person p2;
    p2.All=200;

    cout<<"p1的All:"<<p1.All<<endl;

    cout<<"Person::All:"<<Person::All<<endl;
    //这里会报错，因为private无法访问
    //cout<<Person::private_All<<endl;
}

int main(){
    test();
    return 0;
}
