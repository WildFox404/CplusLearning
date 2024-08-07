#include<iostream>
using namespace std;

class Student{

  public:
    int s_age;
    int *s_height;

    Student(){
      cout<<"the default constructor is called"<<endl;
    }

    Student(int age,int height){
      s_age=age;
      s_height=new int(height);
      cout<<"parameter constructor is called"<<endl;
    }

    Student(const Student &p){
      s_age=p.s_age;
      s_height=new int(*p.s_height);
      cout<<"copy constructor is called"<<endl;
    }

    ~Student(){
      if(s_height!=NULL)
      {
        delete s_height;
        s_height=NULL;
      }
      cout<<"the destructor is called"<<endl;
    }
};

void test(){
  Student p1(18,160);
  cout<<"p1 age="<<p1.s_age<<" p1 height="<<*p1.s_height<<endl;
  Student p2(p1);
  cout<<"p2 age="<<p2.s_age<<" p2 height="<<*p2.s_height<<endl;
}
int main(){
  test();  

  return 0;
}
