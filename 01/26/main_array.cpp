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
    struct student arr[3] = 
    {
        {"zhangsan", 18, 80},
        {"lisi", 19, 60},
        {"wangwu", 20, 70}
        };
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: " << arr[i].name << "\t Age: " << arr[i].age << "\t Score: " << arr[i].score << endl;
    }
    
    return 0;
}