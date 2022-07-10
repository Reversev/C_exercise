#include<iostream>
#include<string>
using namespace std;

// 设计一个学生类 属性有姓名和学号
// 可以给姓名和学号赋值 可以显示学生的姓名和学号

// 设计学生类
class Student
{
public:   // 公共权限
    // 类中的属性和行为 我们统称为 成员
    // 属性 又称为 成员属性 成员变量
    string m_Name;
    string m_Id;

    // 行为 又称为 成员函数 成员方法
    // 显示姓名和学号
    void showStudent()
    {
        cout << "Name: " << m_Name << " Id: "<< m_Id << endl;
    }

    // 给姓名赋值
    void setName(string name)
    {
        m_Name = name;
    }

    // 给学号赋值
    void setId(string id)
    {
        m_Id = id;
    }
};

int main()
{
    Student s1;
    s1.m_Name = "zhangsan";
    s1.setName("zhans");
    s1.m_Id = "001";
    s1.setId("003");
    s1.showStudent();

    Student s2;
    s2.m_Name = "lisi";
    s2.m_Id = "002";
    s2.showStudent();

    return 0;
}