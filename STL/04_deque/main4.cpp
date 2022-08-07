#include<deque>
#include<iostream>
using namespace std;

// deque容器的插入和删除
void printDeque(deque<int> &d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 两端操作
void test01()
{
    deque<int> d1;
    // 尾删
    d1.push_back(10);
    d1.push_back(20);

    // 头插
    d1.push_front(100);
    d1.push_front(1000);

    printDeque(d1);  // 1000 100 10 20

    // 尾删
    d1.pop_back();
    printDeque(d1);  // 1000 100 10

    // 头删
    d1.pop_front();
    printDeque(d1);  // 100 10
}

void test02()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(100);
    d1.push_back(1000);
    printDeque(d1);   // 10 20 100 1000

    // insert 插入
    d1.insert(d1.begin(), 200);
    printDeque(d1);   // 200 10 20 100 1000

    d1.insert(d1.begin(), 2, 10000);
    printDeque(d1);   // 10000 10000 200 10 20 100 1000

    // 按照区间进行插入
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);

    d1.insert(d1.begin(), d2.begin(), d2.end());
    printDeque(d1);   // 1 2 3 10000 10000 200 10 20 100 1000
}

void test03()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(100);
    d1.push_back(200);

    // 删除
    deque<int>::iterator it = d1.begin();
    it++;
    d1.erase(it);
    printDeque(d1);   // 10 100 200

    // 按照区间的方式删除
    d1.erase(d1.begin(), d1.end());
    printDeque(d1);
    // 清空
    d1.clear();
    printDeque(d1);
}
int main()
{
    test01();
    test02();
    test03();
    return 0;
}