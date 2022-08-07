#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// vector 容器中存放自定义的数据类型
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

void test01()
{
    vector<Person> v;
    Person p1("aa", 10);
    Person p2("bb", 20);
    Person p3("cc", 30);
    Person p4("dd", 40);
    Person p5("ee", 50);

    // 向容器中添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    // 遍历容器中的数据  <Person>的类型 = *it的类型
    for(vector<Person>::iterator it=v.begin(); it != v.end(); it++)
    {
        // cout << "Name: " << (*it).m_name << " Age: " << (*it).m_age << endl;
        cout << "Name: " << it->m_name << " Age: " << it->m_age << endl;
    }
}

// 存放自定义数据类型的指针
void test02()
{
    vector<Person*> v;
    Person p1("aa", 10);
    Person p2("bb", 20);
    Person p3("cc", 30);
    Person p4("dd", 40);
    Person p5("ee", 50);

    // 向容器中添加数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    // 遍历容器中的数据   <Person*>的类型 = *it的类型
    for(vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name: " << (*it)->m_name << " Age: " << (*it)->m_age << endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}
