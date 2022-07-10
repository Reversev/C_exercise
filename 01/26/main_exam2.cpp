#include<iostream>
using namespace std;
#include<ctime>

// 英雄结构体
struct hero
{
    string name;
    int age;
    string sex;
};

// 冒泡排序
void bubbleSort(hero arr[], int len)
{
    for (int i=0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// 打印数组
void printHeros(hero arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名: " << arr[i].name << "性别: " << arr[i].sex 
        << "年龄: " << arr[i].age << endl;
    }
}

int main()
{
    struct hero arr[5] = 
    {
        {"刘备", 23, "男"},
        {"关羽", 23, "男"},
        {"张飞", 23, "男"},
        {"赵云", 23, "男"},
        {"貂蝉", 23, "女"},
    };

    int len = sizeof(arr) / sizeof(hero);
    
    bubbleSort(arr, len);

    printHeros(arr, len);

    return 0;
}