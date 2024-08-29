//
// Created by 3220429027 on 2024/8/28.
//
//重载下标运算符
//        如果对象中有数组，重载下标运算符[]，操作对象中的数组将像操作普通数组一样方便。
//下标运算符必须以成员函数的形式进行重载。
//下标运算符重载函数的语法：
//返回值类型 &perator[](参数);
//或者：
//const 返回值类型 &operator[](参数) const;
//使用第一种声明方式，[]不仅可以访问数组元素，还可以修改数组元素。
//使用第二种声明方式，[]只能访问而不能修改数组元素。
//在实际开发中，我们应该同时提供以上两种形式，这样做是为了适应const对象，因为通过const 对象只能调用const成员函数，如果不提供第二种形式，那么将无法访问const对象的任何数组元素。
//在重载函数中，可以对下标做合法性检查，防止数组越界。

//例：
#include <iostream>         // 包含头文件。
using namespace std;        // 指定缺省的命名空间。

class CGirl       // 超女类CGirl。
{
private:
    string    m_boys[3];       // 超女的男朋友
public:
    string    m_name;          // 姓名。

    // 默认构造函数。
    CGirl() { m_boys[0] = "子都"; m_boys[1] = "潘安"; m_boys[2] = "宋玉"; }
    // 显示全部男朋友的姓名。
    void show() { cout << m_boys[0] << "、" << m_boys[1] << "、" << m_boys[2] << endl; }
    string& operator[](int ii)
    {
        return m_boys[ii];
    }
    const string& operator[](int ii) const
    {
        return m_boys[ii];
    }
};

int main()
{
    CGirl g;          // 创建超女对象。
    g[1] = "王麻子";
    cout << "第1任男朋友：" << g[1] << endl;
    g.show();

    const CGirl g1 = g;
    cout << "第1任男朋友：" << g1[1] << endl;
}
