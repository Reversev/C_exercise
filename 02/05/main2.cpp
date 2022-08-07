#include<iostream>
using namespace std;

// 拷贝构造函数调用时机
class Person
{
    public:
        Person()
        {
            cout << "Person 默认构造函数调用" << endl;
        }

        Person(int age)
        {
            cout << "Person 有参构造函数调用" << endl;
            m_Age = age;
        }

        Person(const Person &p)
        {
            cout << "Person 拷贝构造函数调用" << endl;
            m_Age = p.m_Age;
        }

        ~Person()
        {
            cout << "Person 析构函数调用" << endl;
        }

        int m_Age;
};

// 1 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << "p2 的年龄为: " << p2.m_Age << endl;
}

// 2 值传递的方式给函数参数传值  实参传到形参
void DoWork(Person p)
{}
void test02()
{
    Person p;
    DoWork(p);
}

// 3 值方式返回局部对象
Person DoWork3()
{
    Person p1;
    cout << (int*)&p1 << endl;
    return p1;
}

void test03()
{
    Person p = DoWork3();
    cout << (int*)&p << endl;
}

int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}