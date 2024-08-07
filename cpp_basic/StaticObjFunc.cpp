#include<iostream>
using namespace std;

//static member functions
//All objects share the same function
//Static member functions can only access static
class Person{
  public:
    static void func(){
      cout<<"static void func be called"<<endl;
      all=100;
    }

    static int all;
  private:
    static void func2(){
      cout<<"private static void func be called"<<endl;
    }
};
int  Person::all=0;
void test(){
  //access by object
  Person p;
  p.func();

  //access by class name
  Person::func();

  Person p2;
  cout<<"p2.all="<<p2.all<<endl;

  //this will error,beacuse it is private
  //Person::func2();
}
int main(){
  test();
  return 0;
}
