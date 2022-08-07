#include<iostream>
#include<string>
using namespace std;

// 访问权限 （三种）
// 公共权限 public     成员 类内可以访问 类外可以访问
// 保护权限 protected  成员 类内可以访问 类外不可以访问 子可以访问父中的保护内容
// 私有权限 private    成员 类内可以访问 类外不可以访问 子不可访问父中的私有内容
class Person
{
public:      // 公共权限
    string m_name;

protected:  // 保护权限
    string m_car;

private:   // 私有权限
    int m_password;

public:
    void func()
    {
        m_name = "zhangsan";
        m_car = "tuolaji";
        m_password = 123456;
    }
};

int main()
{
    Person p1;
    p1.m_name = "lisi";
    // p1.m_car = "benchi";   // 保护权限类外访问不到
    // p1.m_password = 131422; // 私有权限类外访问不到

    p1.func();

    return 0;
}