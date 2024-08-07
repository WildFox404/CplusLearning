#include<iostream>
using namespace std;

int main(){
  int a=10086;
  int b=114514;
  //Constant Pointer:
  //Features:The pointer can be modified
  //but the value of the pointer cannot be modified
  const int * p1 = &a;
  p1 = &b;
  cout<<"*p1:"<<*p1<<endl;
  
  //Pointer Constant:
  //Features:The pointer cannot be modified
  //and the value of the pointer can be modified
  int * const p2 = &a;
  *p2 = 20;
  cout<<"*p2:"<<*p2<<endl;

  //Constant Pointer Constant:
  //The Pointer cannot be modified
  //and the value cannot be modified
  const int * const p3 = &a;
  cout<<"*p3:"<<*p3<<endl;

  return 0;
}
