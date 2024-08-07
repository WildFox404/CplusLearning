#include<iostream>
using namespace std;

struct Student{
  string name;
  int age;
  int score;
};

int main(){
  Student stu={"zhangsan",18,99};

  Student *p = &stu;

  cout<<"name:"<<p->name<<"\nage:"<<p->age<<"\nscore:"<<p->score<<endl;
  return 0;
}
