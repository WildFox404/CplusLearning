#include<iostream>
using namespace std;

int main(){
    int a=0;
    cout<<"����a�ĵ�ַΪ:"<<&a<<endl;

    //����һ��ָ�����
    //ָ������Ķ����﷨���������� *ָ�������
    int *p;
    //��ָ���¼����a�ĵ�ַ
    p = &a;
    cout<<"ָ��p��ֵΪ:"<<p<<endl;

    //ʹ��ָ��
    //ͨ�������ÿ����ҵ�ָ����ָ�������
    cout<<"ͨ�������õõ�ָ��p��ֵ:"<<*p<<endl;
    cout<<"����a��ֵΪ:"<<a<<endl;
    return 0;
}
