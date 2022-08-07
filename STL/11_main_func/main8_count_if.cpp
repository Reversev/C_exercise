#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

// 常用查找算法 count_if
// 统计内置数据类型
class Greater20
{
    public:
        bool operator()(int val)
        {
            return val > 20;
        }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(20);

    int num = count_if(v.begin(), v.end(), Greater20());

    cout << "the count (greater than 20) is " << num << endl;
}

// 统计自定义数据类型
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
class AgeGreater20
{
    public:
        bool operator()(const Person &p)
        {
            return p.m_age > 20;
        }
};
void test02()
{
    vector<Person> v;
    Person p1("liubei", 35);
    Person p2("guanyu", 35);
    Person p3("zhangfei", 35);
    Person p4("zhaoyun", 40);
    Person p5("caochao", 20);

    // 将人员插入到容器中
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    // 统计 大于20岁的人数
    int num = count_if(v.begin(), v.end(), AgeGreater20());
    cout << "num (greater than 20) = " << num << endl;
}

int main()
{
    test01();
    return 0;
}