#include<iostream>
using namespace std;

class Building{

  friend void goodGay(Building *building);

  public:
    Building(string sittingroom,string myroom){
      this->m_SittingRoom=sittingroom;
      this->m_MyRoom=myroom;
    }

    string m_SittingRoom;
  private:
    string m_MyRoom;
};

//global function
void goodGay(Building *building)
{
  cout<<"building sittingroom="<<building->m_SittingRoom<<endl;
  cout<<"building myroom="<<building->m_MyRoom<<endl;
}

void test(){
  Building building("sittingroom","myroom");
  goodGay(&building);

}
int main(){
  test();  
  return 0;
}
