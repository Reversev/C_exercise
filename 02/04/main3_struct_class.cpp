#include<iostream>
using namespace std;

class C1
{
    int m_A;  // 默认的权限是 私有
};

struct C2
{
    int m_A; // 默认的权限是 公共
};

int main()
{
    // struct 和 class 的区别
    // struct 默认的权限是 公共 public
    // struct 默认的权限是 私有 private

    // C1 c1;
    // c1.m_A = 100;

    C2 c2;
    c2.m_A = 100;
    
    return 0;
}