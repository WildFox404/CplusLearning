#include<iostream>
using namespace std;
//Member variables and member functions are stored separately

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
