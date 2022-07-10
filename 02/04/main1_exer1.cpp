#include<iostream>
#include<string>
using namespace std;

// 设计一个学生类 属性有姓名和学号
// 可以给姓名和学号赋值 可以显示学生的姓名和学号
class Student
{
public:  // 公共权限
    // 类中的属性和行为 统一称为 成员
    // 属性 成员属性 成员变量
    // 行为 成员函数 成员方法 
    // 属性
    string m_name;
    string id;
    
    // 行为
    void show()
    {
        cout << "Name: " << m_name << endl;
        cout << "Id: " << id << endl;
    }

    // 给姓名赋值
    void setName(string name)
    {
        m_name = name;
    }
};

int main()
{
    Student stu1;
    stu1.m_name = "zhangsan";
    stu1.setName("lisi");
    stu1.id = "12310000";
    stu1.show();
    return 0;
}
