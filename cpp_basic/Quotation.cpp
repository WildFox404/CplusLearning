#include<iostream>
using namespace std;

void swap(int &a,int &b){
  int temp=a;
  a=b;
  b=temp;
}

int main(){
  int a=10;
  int &b=a;
  //equals int * const b=a

  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;

  b=100;
  //modify the value of b
  
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;

  int e=10;
  int d=20;
  cout<<"e="<<e<<endl;
  cout<<"d="<<d<<endl;
  swap(e,d);
  cout<<"e="<<e<<endl;
  cout<<"d="<<d<<endl;

  return 0;
}
