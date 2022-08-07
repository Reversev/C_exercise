#include<iostream>
#include<string>
// 第一种解决方式: 直接包含源文件
// #include"person.cpp"   
// 第二种解决方式: 将.h和.cpp的内容写到一起，将名称改为.hpp
#include"person.hpp"
using namespace std;

// 类模板份文件编写问题及解决
// template<class T1, class T2>
// class Person
// {
//     public:
//         Person(T1 name, T2 age);
//         void showPerson();
//         T1 m_name;
//         T2 m_age;
// };

// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age)
// {
//     this->m_name = name;
//     this->m_age = age;
// }

// template<class T1, class T2>
// void Person<T1, T2>::showPerson()
// {
//     cout << "name: " << this->m_name << endl;
//     cout << "age: " << this->m_age << endl;  
// }

void test01()
{
    Person<string, int> p("Tom", 19);
    p.showPerson();
}

int main()
{
    test01();
    return 0;
}