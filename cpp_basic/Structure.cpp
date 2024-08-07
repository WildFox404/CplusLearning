#include<iostream>
using namespace std;

//define structure
struct Student
{
  string name;
  int age;
  int score;
}s3;
//creat struct s3


int main(){
  struct Student s1;
  s1.name="zhangsan";
  s1.age=18;
  s1.score=99;

  struct Student s2={"lisi",17,88};

  //struct key can be omitted
  Student s4;

  cout<<"name:"<<s1.name<<"\nage:"<<s1.age<<"\nscore:"<<s1.score<<endl;

  Student arr[3]={
    {"123",123,123},
    {"345",345,345},
    {"145",145,145}
  };

  for(int i=0;i<3;i++){
    cout<<"i of arr:"<<"(name)"<<arr[i].name<<"(age)"<<arr[i].age<<"(score)"<<arr[i].score<<endl;
  }
  return 0;
}
