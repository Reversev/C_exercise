#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

// 常用的查找算法 count
// 1 统计内置数据类型
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);

    int num = count(v.begin(), v.end(), 40);
    cout << "num (40) = " << num << endl;
}

// 2 统计自定义数据类型
class Person
{
    public:
        Person(string name, int age)
        {
            this->m_name = m_name;
            this->m_age = age;
        }

        bool operator==(const Person &p)   // **const**
        {
            if (this->m_age == p.m_age){return true;}
            else{return false;}
        }

        string m_name;
        int m_age;
};

void test02()
{
    vector<Person> v;
    Person p1("liubei", 35);
    Person p2("guanyu", 35);
    Person p3("zhangfei", 35);
    Person p4("zhaoyun", 30);
    Person p5("caochao", 40);

    Person p("zhugeliang", 35);

    // 将人员插入到容器中
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int num = count(v.begin(), v.end(), p);
    cout << "num (zhugeliang 35) = " << num << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}