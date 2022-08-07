#include<iostream>
#include<string>
using namespace std;

// 类模板与函数模板的区别
template<class NameType, class AgeType = int>   // 默认参数
class Person
{
    public:
        Person (NameType name, AgeType age)
        {
            this->m_name = name;
            this->m_age = age;
        }
        void showPerson()
        {
            cout << "name: " << this->m_name << endl;
            cout << "age: " << this->m_age << endl;
        }
        NameType m_name;
        AgeType m_age;
};

// 类模板没有自动类型推导使用方式
void test01()
{
    // Person p("sunwukong", 99);   // error
    Person<string, int> p("sunwukong", 99);  // 只能用显示指定类型
    p.showPerson();
}

// 2 类模板在模板参数列表中可以有默认参数
void test02()
{
    Person<string> p("zhubajie", 99);
    p.showPerson();
}

int main()
{
    test01();
    test02();
    return 0;
}
