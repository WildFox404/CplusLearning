#include<iostream>
using namespace std;

class Person{
  public:
    int p_age;
    int p_height;
    int p_score;
    //troditional constructor
    Person(int age,int height,int score){
      p_age=age;
      p_height=height;
      p_score=score;
    }

    //Initialize constructor
    Person():p_age(10),p_height(160),p_score(99){
    
    }

    Person(int age,int height):p_age(age),p_height(height){
      p_score=999;
    }
};
void test(){
  Person p1(10,160,99);
  cout<<"p1 age,height,score = "<<p1.p_age<<","<<p1.p_height<<","<<p1.p_score<<endl;
  Person p2;
  cout<<"p2 age,height,score = "<<p2.p_age<<","<<p2.p_height<<","<<p2.p_score<<endl;
  Person p3(18,190);
  cout<<"p3 age,height,score = "<<p3.p_age<<","<<p3.p_height<<","<<p3.p_score<<endl;
}

int main(){
  test();
  return 0;
}
