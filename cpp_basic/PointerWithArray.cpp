#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};

  int *p =arr;//the pointer to an array
  
  cout<<"the first element of array"<<arr[0]<<endl;
  cout<<"the first element of array by pointer"<<*p<<endl;

  for(int i=0;i<9;i++){
    cout<<"the "<<i<<" element of array by pointer is "<<*p<<endl;
    p++;
  }
  return 0;
}

