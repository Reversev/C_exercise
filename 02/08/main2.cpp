#include<iostream>
using namespace std;

// 左移运算符重载
class Person
{
    friend ostream &operator<<(ostream &out, Person &p);
    public:
        // 利用成员函数重载 左移运算符
        // 通常不会利用成员函数重载左移运算符 因为无法实现cout在左侧
        void operator<<(Person &p)
        {

        }
        int m_A;
        int m_B;
};

// 只能利用全局函数重载左移运算符
ostream &operator<<(ostream &out, Person &p)   // 本质 operator<<(cout, p)  简化: cout << p
{
    out << "m_A: " << p.m_A << " m_B: " << p.m_B;
    return out;   // 链式编程思想
}

void test01()
{
    Person p;
    p.m_A = 10;
    p.m_B = 10;

    cout << p << endl;
}

int main()
{
    test01();
    return 0;
}