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
  cout<<"before swap the value of a and b:"<<a<<" "<<b<<endl;
  swap(&a,&b);
  cout<<"after swap the value of a and b:"<<a<<" "<<b<<endl;
  return 0;
}
