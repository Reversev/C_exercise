#include<iostream>
using namespace std;

// 深拷贝和浅拷贝
class Person
{
    public:
        Person()
        {
            cout << "Person的默认构造函数调用" << endl;
        }

        Person(int age, int height)
        {
            m_Age = age;
            m_Height = new int(height);
            cout << "Person的有参构造函数调用" << endl;
        }

        // 自己实现一个拷贝构造函数来解决浅拷贝带来的问题
        Person (const Person &p)
        {
            cout << "Person的拷贝构造函数调用" << endl;
            m_Age = p.m_Age;
            // m_Height = p.m_Height;  // 编译器默认实现就是这行代码
            // 深拷贝操作
            m_Height = new int(*p.m_Height);
        }

        ~Person()   // 先进后出
        {
            // 析构代码 将堆区开辟的数据做释放操作
            if (m_Height != NULL)
            {
                delete m_Height;
                m_Height = NULL;
            }
            cout << "Person的析构函数调用" << endl;
        }

        int m_Age;
        int *m_Height;
};

void test01()
{
    Person p1(18, 160);
    cout << "p1的年龄为: " << p1.m_Age << "身高为: "<< *p1.m_Height << endl;

    Person p2(p1);   // 如果利用编译器提供的拷贝构造函数 会做浅拷贝操作 导致堆区的内存重复释放
    // 解决方法：利用深拷贝
    cout << "p2的年龄为: " << p2.m_Age << "身高为: "<< *p2.m_Height << endl;
}

int main()
{
    test01();
    return 0;
}