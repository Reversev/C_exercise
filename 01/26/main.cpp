#include<iostream>
using namespace std;
// struction
// 语法：struct 结构体名 { 结构体成员列表 }；
// 通过结构体创建变量的方式有三种：

// 1\struct 结构体名 变量名
// 2\struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
// 3\定义结构体时顺便创建变量

// the define of the struct
struct student
{
    // the list of the members
    string name;
    int age;
    int score;
}stu3;

int main()
{
    // 1
    struct student stu1;  // struct 关键字可以省略

    stu1.name = "zhangsan";
    stu1.age = 18;
    stu1.age = 100;

    cout << "Name: " << stu1.name << "\tAge: " << stu1.age << "\tScore: " << stu1.score << endl;

    // 2
    struct student stu2 = {"lisi", 19, 60};

    cout << "Name: " << stu2.name << "\tAge: " << stu2.age << "\tScore: " << stu2.score << endl;
    
    stu3.name = "wangwu";
    stu3.age = 18;
    stu3.score = 80;

    cout << "Name: " << stu3.name << "\tAge: " << stu3.age << "\tScore: " << stu3.score << endl;


    return 0;
}
// > 总结1：定义结构体时的关键字是struct，不可省略

// > 总结2：创建结构体变量时，关键字struct可以省略

// > 总结3：结构体变量利用操作符 "."  访问成员