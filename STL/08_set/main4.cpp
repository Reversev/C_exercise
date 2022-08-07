#include<set>
#include<iostream>
using namespace std;

//set查找和统计
void test01()
{
    // 查找
    set<int> s1;
    // 插入数据
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(10);

    set<int>::iterator pos = s1.find(30);
    if (pos != s1.end())
    {
        cout << "found an element is " << *pos << endl;
    }
    else {cout << " not found the element!" << endl;}
}

void test02()
{
    // 统计
    set<int> s1;
    // 插入数据
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(10);

    int num = s1.count(30); // 统计30个数
    // 对于set而言 统计结果要么是1 要么是0
    cout << "num = " << num << endl;
}
int main()
{
    test01();
    test02();
    return 0;
}