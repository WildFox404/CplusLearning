#include<iostream>
using namespace std;


//����������
//�ڳ��������У���Ա���Բ��ܱ��޸�
//����ڳ�Ա����ǰ���Ϲؼ���mutable
//������ڳ����������޸���
//
//��������
//�����Ķ���ǰ�����const�ؼ��֣���ʾΪ��������
//��������ֻ�ܵ��ó�������
class Person{

public:
    int age;

    mutable int score;

    void showPerson(){
        this->age=100;
    }
    //thisָ��ı�����һ��ָ������ָ��
    //const Person * const this;
    void showPersonConstant() const{
        //����ᱨ��
        // this->age=100;
        this->score=999;
    }
};

void test(){
    Person p;
    p.showPerson();
    cout<<"p������="<<p.age<<endl;
    p.showPersonConstant();
    cout<<"p�ķ���="<<p.score<<endl;

    Person p2;
    p2.showPersonConstant();
    //����ᱨ��
    p2.showPerson();
}

int main(){
    test();
    return 0;
}
