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
  cout<<"交换前a和b:"<<a<<" "<<b<<endl;
  swap(&a,&b);
  cout<<"交换后a和b:"<<a<<" "<<b<<endl;
  return 0;
}
