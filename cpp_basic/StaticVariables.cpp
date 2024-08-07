#include<iostream>
using namespace std;
//Static member variables
//All objects share a copy of data
//Allocate memory during the compilation phase
//In-class declearation,out-of-class initialization]

class Person{
  public:
    static int All;
  private:
    //static member variables have access
    static int private_All;

};
int Person::All=100;
int Person::private_All=200;
void test(){
  Person p1;
  cout<<"p1 All:"<<p1.All<<endl;

  Person p2;
  p2.All=200;

  cout<<"p1 All:"<<p1.All<<endl;

  cout<<"Person::All:"<<Person::All<<endl;
  //this will error,because private cannot be accessed
  //cout<<Person::private_All<<endl;
}

int main(){
  test();
  return 0;
}
