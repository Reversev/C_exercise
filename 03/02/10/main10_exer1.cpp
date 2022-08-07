#include<iostream>
#include<string>
#include"myArray.hpp"
using namespace std;

// 类模板案例

void printArray(myArray<int> &arr)
{
    for (int i=0; i < arr.getSize(); i++)
    {
        cout << arr[i] << endl;
    }
}

void test01()
{   
    myArray<int> arr1(5);
    for (int i=0; i<5; i++)
    {
        // 利用尾插法向数组中插入数据
        arr1.push_back(i);
    }
    cout << "arr1: " << endl;
    printArray(arr1);

    cout << "arr1的容量为: " << arr1.getCapacity() << endl;
    cout << "arr1的大小为: " << arr1.getSize() << endl;
    
    arr1.pop_back();
    cout << "arr1尾删后: " << endl;
    cout << "arr1的容量为: " << arr1.getCapacity() << endl;
    cout << "arr1的大小为: " << arr1.getSize() << endl;
    printArray(arr1);

    // myArray<int> arr2(arr1);
    // myArray<int> arr3(100);
    // arr3 = arr1;
}

// 测试自定义的数据类型
class Person
{
    public:
        Person(){};
        Person(string name, int age)
        {
            this->m_name = name;
            this->m_age = age;
        }
        string m_name;
        int m_age;
};

void printPersonArray(myArray<Person>& arr)
{
    for (int i=0; i<arr.getSize(); i++)
    {
        cout << "Name: " << arr[i].m_name << " Age: " << arr[i].m_name << endl;
    }
}
void test02()
{
    myArray<Person> arr(10);
    Person p1("sunwukong", 999);
    Person p2("hanxin", 20);
    Person p3("daji", 18);
    Person p4("zhaoyun", 25);  
    Person p5("anqila", 27); 
    arr.push_back(p1);
    arr.push_back(p2);
    arr.push_back(p3);
    arr.push_back(p4);
    arr.push_back(p5);

    printPersonArray(arr);
    cout << "arr的容量为: " << arr.getCapacity() << endl;
    cout << "arr的大小为: " << arr.getSize() << endl;

}

int main()
{
    // test01();
    test02();
    return 0;
}