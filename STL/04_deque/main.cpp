#include<iostream>
#include<deque>
using namespace std;

// deque构造函数
void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)
    {
        // *it = 100;   // 容器中的数据不可修改
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d;
    for (int i = 0; i < 10; i++)
    {
        d.push_back(i);
    }
    printDeque(d);

    deque<int> d1(d.begin(), d.end());
    printDeque(d1);

    deque<int> d2(10, 100);
    printDeque(d2);

    deque<int> d3(d2);
    printDeque(d3);
}

int main()
{
    test01();
    return 0;
}