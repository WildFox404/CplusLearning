#include<iostream>
using namespace std;

int main(){
  int a=0;
  cout<<"variable a address:"<<&a<<endl;

  //define a pointer value
  //q syntax for pointer definition: data type * pointer variable name
  int *p;
  //let the pointer record the address of variable a
  p = &a;
  cout<<"variable p value:"<<p<<endl;

  //use pointer
  //can find what the pointer points to by dereferencing
  cout<<"the p pointer value by dereferencing:"<<*p<<endl;
  cout<<"variable a value:"<<a<<endl;
  return 0;
}
