#include<iostream>
#include<string>
using namespace std;

// 类对象作为类成员
// 手机类
class Phone
{
    public:
        Phone(string pName)
        {
            cout << "Phone构造函数调用" << endl;
            m_PName = pName; 
        }

        ~Phone()
        {
            cout << "Phone析构函数调用" << endl;
        }

        // phone branch
        string m_PName;
};

// 人类
class Person
{
    public:
        // Phone m_Phone = pName;  隐式转换法
        Person(string name, string pName): m_Name(name), m_Phone(pName) {cout << "Person构造函数调用" << endl;}  

        ~Person()
        {
            cout << "Person析构函数调用" << endl;
        }

        // name
        string m_Name;

        // phone
        Phone m_Phone;
};

// 当其他类对象作为本类的成员 构造时先构造类对象 再构造自身 析构的顺序与构造相反
void test01()
{
    Person p("zhangsan", "Apple");
    cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main()
{
    test01();
    return 0;
}