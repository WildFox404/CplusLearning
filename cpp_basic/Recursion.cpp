#include<iostream>
using namespace std;

int func(int n){
  if(n>0){
    return n*func(n-1);
  }else{
    return 1;
  }
}
int main(){
  int result = func(5);
  cout<<"result ="<<result<<endl;
  return 0;
}
