#include<iostream>
using namespace std;
//成员变量和成员函数被分别存储

class Person{
  public:
    int age;
    Person(int age){
      this->age=age;
    }
};
void test(){
  Person p(10);
  cout<<"p age="<<p.age<<endl;
}

int main(){
  test();
  return 0;
}
