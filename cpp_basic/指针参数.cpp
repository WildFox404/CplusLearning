#include<iostream>
using namespace std;

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

int main(){
  int a=10;
  int b=20;
  cout<<"����ǰa��b:"<<a<<" "<<b<<endl;
  swap(&a,&b);
  cout<<"������a��b:"<<a<<" "<<b<<endl;
  return 0;
}
