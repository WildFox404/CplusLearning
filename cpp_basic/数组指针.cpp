#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};

  int *p =arr;//the pointer to an array
  
  cout<<"数组的第一个元素"<<arr[0]<<endl;
  cout<<"数组的第一个元素(指针获取)"<<*p<<endl;

  for(int i=0;i<9;i++){
    cout<<"第 "<<i<<" 元素通过指针获取 "<<*p<<endl;
    p++;
  }
  return 0;
}

