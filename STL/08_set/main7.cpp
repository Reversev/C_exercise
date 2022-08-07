#include<set>
#include<iostream>
#include<string>
using namespace std;

// set容器排序 存放自定义数据类型
class Person
{
    public:
        Person(string name, int age)
        {
            this->m_name = name;
            this->m_age = age;
        }
        string m_name;
        int m_age;
};

class comparePerson
{
    public:
        bool operator()(const Person p1, const Person p2)
        {
            // 按照年龄降序 
            return p1.m_age > p2.m_age;
        }
};
void test01()
{
    set<Person, comparePerson> s1;

    // 创建Person对象
    Person p1("刘备", 24);
    Person p2("关羽", 25);
    Person p3("张飞", 28);
    Person p4("赵云", 22);

    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);

    for (set<Person>::iterator it = s1.begin(); it != s1.end(); it++)
    {
        cout << "name: " << (*it).m_name << " age: " << (*it).m_age << endl;
    }

}

int main()
{
    test01();
    return 0;
}