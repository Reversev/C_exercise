#include<set>
#include<iostream>
using namespace std;
// set容器大小和交换
// 大小
void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    set<int> s1;
    // 插入数据
    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(30);
    printSet(s1);
    // 判断是否为空
    if (s1.empty())
    {
        cout << "s1 is empty!" << endl;
    }
    else{cout << "s1 is not empty!" << endl;
    cout << "the size of s1 is " << s1.size() << endl;}
}

// 交换
void test02()
{
    set<int> s1;
    // 插入数据
    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(30);

    set<int> s2;
    // 插入数据
    s2.insert(100);
    s2.insert(400);
    s2.insert(200);
    s2.insert(300);
    cout << "------------------before swap--------------" << endl;
    printSet(s1);
    printSet(s2);
    cout << "-------------------after swap--------------" << endl;
    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}

int main()
{
    test01();
    test02();
    return 0;
}