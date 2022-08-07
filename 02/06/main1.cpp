#include<iostream>
using namespace std;

class Person
{
    public:
        Person(int age)
        {
            this->age = age;  // this指针指向的是 被调用的成员函数 所属的对象
        }

        Person& PersonADDAge(Person &p)
        {
            this->age += p.age;
            // this指向p2的指针 而*this指向的就是p2这个本体
            return *this;
        }
        // int m_Age;
        int age;
};

// 1 解决名称冲突
void test01()
{
    Person p(18);
    cout << "p1的年龄为: " << p.age << endl;
}

// 2 返回对象本身 用*this
void test02()
{
    Person p1(10);
    Person p2(10);
    p2.PersonADDAge(p1).PersonADDAge(p1).PersonADDAge(p1);  // 链式编程思想
    cout << "p2的年龄为: " << p2.age << endl;
}

int main()
{
    test02();
    return 0;
}
