#include<iostream>
using namespace std;


//Constant Functions:
//Member properties cannot be modified in constant functions
//if you add the keyword mutable to a member property
//you can modify it in the constant function
//
//Common objects:
//The declared object is preceded by the const as a permanent object
//Constant objects can only call constant functions
class Person{

  public:
    int age;

    mutable int score;
    
    void showPerson(){
      this->age=100;
    }
    //the essence of this pointer is a pointer constant
    //const Person * const this;
    void showPersonConstant() const{
      //this will error
      //this->age=100;
      this->score=999;
    }
};

void test(){
  Person p;
  p.showPerson();
  cout<<"p age="<<p.age<<endl;
  p.showPersonConstant();
  cout<<"p score="<<p.score<<endl;

  Person p2;
  p2.showPersonConstant();
  //this will error
  //p2.showPerson();

}
int main(){
  test();
  return 0;
}
