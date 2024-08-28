#include<iostream>
using namespace std;


//常量函数：
//在常量函数中，成员属性不能被修改
//如果在成员属性前加上关键字mutable
//则可以在常量函数中修改它
//
//常见对象：
//声明的对象前面带有const关键字，表示为常量对象
//常量对象只能调用常量函数
class Person{

public:
    int age;

    mutable int score;

    void showPerson(){
        this->age=100;
    }
    //this指针的本质是一个指向常量的指针
    //const Person * const this;
    void showPersonConstant() const{
        //这里会报错
        // this->age=100;
        this->score=999;
    }
};

void test(){
    Person p;
    p.showPerson();
    cout<<"p的年龄="<<p.age<<endl;
    p.showPersonConstant();
    cout<<"p的分数="<<p.score<<endl;

    Person p2;
    p2.showPersonConstant();
    //这里会报错
    p2.showPerson();
}

int main(){
    test();
    return 0;
}
