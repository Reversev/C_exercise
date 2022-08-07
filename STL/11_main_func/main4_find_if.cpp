#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 常用的查找算法 find_if 
// 1 查找内置数据类型
class GreaterFive
{
    public:
        bool operator()(int val)
        {
            return val > 5;
        }
};
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end())
    {
        cout << "not found!" << endl;
    }
    else{ cout << "found greater than five! " << *it << endl;}
}

// 2 查找自定义数据类型
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

class Greater20
{
    public:
        bool operator()(Person &p)
        {
            return p.m_age > 20; 
        }
};

void test02()
{
    vector<Person> v;
    // 创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    // 查找年龄大于20的人
    vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
    if (it == v.end())
    {
        cout << "not found! (20)" << endl;
    }
    else{cout << "found greater than twenty! " << "name: " << (*it).m_name << " age: " << (*it).m_age << endl;}
}

int main()
{
    test01();
    test02();
    return 0;
}