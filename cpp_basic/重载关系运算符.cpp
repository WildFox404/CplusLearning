//
// Created by 3220429027 on 2024/8/28.
//
#include <iostream>         // 包含头文件。
using namespace std;        // 指定缺省的命名空间。

class CGirl       // 超女类CGirl。
{
    string    m_name;     // 姓名。
    int         m_yz;           // 颜值：1-千年美人；2-百年美人；3-绝代美人；4-极漂亮；5-漂亮；6-一般；7-歪瓜裂枣。
    int         m_sc;           // 身材：1-火辣；2-...；3-...；4-...；5-...；6-...；7-膘肥体壮。
    int         m_acting;    // 演技：1-完美；2-...；3-...；4-...；5-...；6-...；7-四不像。
public:
    // 四个参数的构造函数。
    CGirl(string name, int yz, int sc, int acting) { m_name = name;  m_yz = yz;  m_sc = sc; m_acting = acting; }
    // 比较两个超女的商业价值。
    bool operator==(const CGirl& g1)      // 相等==
    {
        if ((m_yz + m_sc + m_acting) == (g1.m_yz + g1.m_sc + g1.m_acting)) return true;
        return false;
    }
    bool operator>(const CGirl& g1)      // 大于>
    {
        if ((m_yz + m_sc + m_acting) < (g1.m_yz + g1.m_sc + g1.m_acting)) return true;
        return false;
    }
    bool operator<(const CGirl& g1)      // 小于<
    {
        if ((m_yz + m_sc + m_acting) > (g1.m_yz + g1.m_sc + g1.m_acting)) return true;
        return false;
    }
};

int main()
{
    CGirl  g1("西施", 1, 2, 2), g2("冰冰", 1, 1, 1);

    if (g1==g2)
        cout << "西施和冰冰的商业价值相同。\n";
    else
    if (g1>g2)
        cout << "西施商业价值相同比冰冰大。\n";
    else
        cout << "冰冰商业价值相同比西施大。\n";
}
