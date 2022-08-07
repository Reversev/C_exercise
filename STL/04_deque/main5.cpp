#include<deque>
#include<iostream>
using namespace std;

// deque容器数据存取

void test01()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);

    // 通过[]访问元素
    // [300, 200, 100, 10, 20, 30]
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    // 通过at方式访问元素
    for (int i = 0; i < d.size(); i++)
    {
        cout << d.at(i) << " ";
    }
    cout << endl;

    //
    cout << "the first element is: " << d.front() << endl;
    cout << "the last element is: " << d.back() << endl;
}

int main()
{
    test01();
    return 0;
}