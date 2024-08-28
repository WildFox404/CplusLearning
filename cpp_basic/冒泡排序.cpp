#include<iostream>
using namespace std;

int main(){
  int arr[]={1,7,5,4,2,7,9,0,4,3};
  int arr_length=sizeof(arr)/4;
  int temp=0;
  for(int i=0;i<arr_length;i++)
  {
    cout<<"before sort"<<arr[i]<<endl;
  }

  for(int i=0;i<arr_length;i++)
  {
    for(int j=0;j<arr_length-i-1;j++)
    {
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }


  for(int i=0;i<arr_length;i++)
  {
    cout<<arr[i]<<endl;
  }
}
