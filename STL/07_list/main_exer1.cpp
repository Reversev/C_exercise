#include<list>
#include<iostream>
#include<string>
using namespace std;

// list排序案例
/*
    案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高

    排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
*/
class Person
{
    public:
        Person(string name, int age, int height)
        {
            this->m_name = name;
            this->m_age = age;
            this->m_height = height;
        }
        string m_name;
        int m_age;
        int m_height;
};
// 指定排序规则
bool comparePerson(Person &p1, Person &p2)
{
    // 按年龄 升序
    if (p1.m_age == p2.m_age)
    {
        // 降序 按升高
        return p1.m_height > p2.m_height;
    }
    return p1.m_age < p2.m_age ;
}
void test01()
{
    list<Person> l;  // 创建容器
    // 准备数据
	Person p1("刘备", 35 , 175);
	Person p2("曹操", 45 , 180);
	Person p3("孙权", 40 , 170);
	Person p4("赵云", 25 , 190);
	Person p5("张飞", 35 , 160);
	Person p6("关羽", 35 , 200);

    // 插入数据
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    l.push_back(p6);

    for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << "name: " << (*it).m_name <<
        " age: " << (*it).m_age << 
        " height: " << (*it).m_height << endl;
    }
    cout << "-----------after sorted-----------" << endl;

    l.sort(comparePerson);
    for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << "name: " << (*it).m_name <<
        " age: " << (*it).m_age << 
        " height: " << (*it).m_height << endl;
    }
}

int main()
{
    test01();
    return 0;
}