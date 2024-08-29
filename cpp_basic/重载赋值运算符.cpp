//
// Created by 3220429027 on 2024/8/28.
//
//C++编译器可能会给类添加四个函数：
//?	默认构造函数，空实现。
//?	默认析构函数，空实现。
//?	默认拷贝构造函数，对成员变量进行浅拷贝。
//?	默认赋值函数, 对成员变量进行浅拷贝。
//对象的赋值运算是用一个已经存在的对象，给另一个已经存在的对象赋值。
//如果类的定义中没有重载赋值函数，编译器就会提供一个默认赋值函数。
//如果类中重载了赋值函数，编译器将不提供默认赋值函数。
//重载赋值函数的语法：类名 & operator=(const 类名 & 源对象);
//注意：
//?	编译器提供的默认赋值函数，是浅拷贝。
//?	如果对象中不存在堆区内存空间，默认赋值函数可以满足需求，否则需要深拷贝。
//?	赋值运算和拷贝构造不同：拷贝构造是指原来的对象不存在，用已存在的对象进行构造；赋值运算是指已经存在了两个对象，把其中一个对象的成员变量的值赋给另一个对象的成员变量。
//示例：
#include <iostream>         // 包含头文件。
using namespace std;        // 指定缺省的命名空间。

class CGirl       // 超女类CGirl。
{
public:
    int         m_bh;               // 编号。
    string    m_name;          // 姓名。
    int*        m_ptr;              // 计划使用堆区内存。

    CGirl() { m_ptr = nullptr; }
    ~CGirl() { if (m_ptr)  delete m_ptr;  }
    // 显示全部成员变量。
    void show() { cout << "编号：" << m_bh << "，姓名：" << m_name << "，m_ptr=" << m_ptr <</* "，*m_ptr=" << *m_ptr<< */endl; }
    CGirl& operator=(const CGirl& g)
    {
        if (this == &g) return *this;          // 如果是自己给自己赋值。

        if (g.m_ptr == nullptr)    // 如果源对象的指针为空，则清空目标对象的内存和指针。
        {
            if (m_ptr != nullptr) { delete m_ptr; m_ptr = nullptr; }
        }
        else    // 如果源对象的指针不为空。
        {
            // 如果目标对象的指针为空，先分配内存。
            if (m_ptr == nullptr) m_ptr = new int;
            // 然后，把源对象内存中的数据复制到目标对象的内存中。
            memcpy(m_ptr, g.m_ptr, sizeof(int));
        }

        m_bh = g.m_bh; m_name = g.m_name;
        cout << "调用了重载赋值函数。\n" << endl;
        return *this;
    }
};

int main()
{
    CGirl g1, g2;          // 创建超女对象。
    g1.m_bh = 8; g1.m_name = "西施"; g1.m_ptr = new int(3);
    g1.show();
    g2.show();

    g2 = g1;
    g2.show();
    cout << "*g1.m_ptr=" << *g1.m_ptr << "，*g2.m_ptr=" << *g2.m_ptr << endl;
}
