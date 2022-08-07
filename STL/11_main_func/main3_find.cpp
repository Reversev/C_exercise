#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

// 常用的查找算法 find
// 查找 内置数据类型
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    // 查找 容器中是否有这5个元素
    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    if (it == v.end())
    {
        cout << "not found!" << endl;
    }
    else
    {
        cout << "found the location is " << *it << endl;
    }
}

class Person
{
    public:
        Person(string name, int age)
        {
            this->m_name = name;
            this->m_age = age;
        }
        // 重载 == 底层find知道如何对比person数据类型
        bool operator==(const Person &p)
        {
            if (this->m_name == p.m_name && this->m_age == p.m_age)
            {return true;}
            else{return false;}
        }
        string m_name;
        int m_age;
};

// 查找 自定义数据类型
void test02()
{
    vector<Person> v;
    // 创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 10);
    Person p3("ccc", 10);
    Person p4("ddd", 10);

    // 放入到容器
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person pp("bbb", 20);

    // 重载 == 
    vector<Person>::iterator it = find(v.begin(), v.end(), pp);
    if (it == v.end())
    {
        cout << "not found!" << endl;
    }
    else
    {
        cout << "found element: name: " << it->m_name << " age: " << it->m_age << endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}