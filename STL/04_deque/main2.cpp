#include<iostream>
#include<deque>
using namespace std;

// deque容器赋值操作
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
    deque<int> d;
    for (int i = 0; i < 10; i++)
    {
        d.push_back(i);
    }
    printDeque(d);

    // operator= 赋值
    deque<int> d1;
    d1 = d;
    printDeque(d1);

    // assign 赋值
    deque<int> d2;
    d2.assign(d.begin(), d.end());

    deque<int> d3;
    d3.assign(10, 100);
    printDeque(d3);

}

int main()
{
    test01();
    return 0;
}