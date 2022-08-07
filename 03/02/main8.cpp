#include<iostream>
#include<string>
using namespace std;

// 通过全局函数打印Person信息
template<class T1, class T2>
class Person;

// 类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
    cout << "类外实现Name: " << p.m_name << endl;
    cout << "类外实现Age: " << p.m_age << endl;
}

template<class T1, class T2>
class Person
{
    // 全局函数 类内实现
    friend void printPerson(Person<T1, T2> p)
    {
        cout << "Name: " << p.m_name << endl;
        cout << "Age: " << p.m_age << endl;
    }

    // 全局函数 类外实现
    // friend void printPerson2(Person<T1, T2> p);   // 普通函数声明
    friend void printPerson2<>(Person<T1, T2> p);    // 加入空模板的参数列表
    // 如果全局函数是类外实现 需要让编译器提前知道

    public:
        Person(T1 name, T2 age)
        {
            this->m_name = name;
            this->m_age = age;
        }

    private:
        T1 m_name;
        T2 m_age;
};

void test01()
{
    Person<string, int> p("Tom", 19);
    printPerson(p);
}

void test02()
{
    Person<string, int> p("Jerry", 19);
    printPerson2(p);
}

int main()
{
    test01();
    test02();
    return 0;
}