#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    struct student stu = {"zhangsan", 18, 100};

    struct student *p = &stu;

    p -> score = 80;   // 指针通过 -> 操作符可以访问成员
    
    cout << "Name: " << p->name << "\t Age: " << p->age << "\t Score: " << p->score << endl; 
    
    return 0;
}