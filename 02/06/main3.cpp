#include<iostream>
using namespace std;

// 常函数 常对象
// 常函数
class Person
{
    public:
        Person(){}  // 构造函数
        // this 指针的本质是 指针常量 指针的指向是不可修改的
        // const Person* const this;
        // 在成员函数后加const 修饰的是this指向 让指针指向的值也不可修改
        void showPerson() const   // const Person* const this   // 常函数
        {
            this->m_B = 100;
            // this->m_A = 100;
            // this = NULL; // this 指针不可修改指针的指向
        }

        void func(){}

        int m_A;
        mutable int m_B;  // 特殊变量 即使在常函数种 也可修改该值 加关键字mutable
};

void test01()
{
    Person p;
    p.showPerson();
}

// 常对象
void test02()
{
    const Person p;  // 在对象前加const 变为常对象
    // p.m_A = 100;  // error
    p.m_B = 100;     // m_B是特殊值 在常对象下也可以修改

    // 常对象只能调用常函数
    p.showPerson();
    // p.func();   // 常对象 不可调用普通成员函数 因为普通成员函数可以修改属性
}

int main()
{
    test02();
    return 0;
}