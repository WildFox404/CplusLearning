#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};

  int *p =arr;//the pointer to an array
  
  cout<<"����ĵ�һ��Ԫ��"<<arr[0]<<endl;
  cout<<"����ĵ�һ��Ԫ��(ָ���ȡ)"<<*p<<endl;

  for(int i=0;i<9;i++){
    cout<<"�� "<<i<<" Ԫ��ͨ��ָ���ȡ "<<*p<<endl;
    p++;
  }
  return 0;
}

