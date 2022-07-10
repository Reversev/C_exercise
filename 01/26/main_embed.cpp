#include<iostream>
using namespace std;
//  结构体中的成员可以是另一个结构体
struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};

int main()
{
    struct teacher t1;
    t1.id = 10000;
    t1.name = "laowang";
    t1.age = 40;

    t1.stu.name = "zhangsan";
    t1.stu.age = 18;
    t1.stu.score = 100;

	cout << "教师 职工编号: " << t1.id << "\t姓名: " << t1.name << "\t年龄: " << t1.age << endl;
	
	cout << "辅导学员 姓名: " << t1.stu.name << "\t年龄:" << t1.stu.age << "\t考试分数: " << t1.stu.score << endl;
    
    return 0;
}