#include<deque>
#include<iostream>
using namespace std;

// deque容器大小操作
void printDeque(deque<int> &d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    if (d1.empty())
    {
        cout << "d1 is empty!" << endl;
    }
    else 
    {
        cout << "d1 is not empty!" << endl;
        cout << "the size of d1 is " << d1.size() << endl;
        // deque 容器没有容量概念
    }
    // 重新指定大小
    d1.resize(12);
    printDeque(d1);

    d1.resize(15, 1);
    printDeque(d1);

    d1.resize(5);
    printDeque(d1);
}

int main()
{
    test01();
    return 0;
}