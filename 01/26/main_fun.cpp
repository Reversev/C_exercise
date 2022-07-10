#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

// 值传递
void printStudent(student stu)
{
    stu.age = 20;
    cout << "子函数中 姓名:" << stu.name << "\t年龄: " << stu.age  << "\t分数:" << stu.score << endl;
}

// 

void printStudent2(student * stu)
{
    stu->age = 28;
	cout << "子函数中 姓名:" << stu->name << "\t年龄:" << stu->age  << "\t分数:" << stu->score << endl;    
}

int main()
{
    student stu = {"zhangsan", 18, 100};
    //
    printStudent(stu);
    cout << "主函数中 姓名:" << stu.name << "\t年龄:" << stu.age << "\t分数:" << stu.score << endl;
    
    cout << endl;
    
    // 地址传递
    printStudent2(&stu);
	cout << "主函数中 姓名:" << stu.name << " 年龄:" << stu.age  << " 分数:" << stu.score << endl;
    
    return 0;
}