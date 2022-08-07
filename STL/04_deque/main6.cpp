#include<deque>
#include<iostream>
#include<algorithm>  // 标准算法头文件
using namespace std;

// deque容器排序
void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    // 300 200 100 10 20 30
    printDeque(d);
    // 对于支持随机访问的迭代器的容器 都可以利用sort算法直接进行排序
    sort(d.begin(), d.end());
    cout << "after sorted " << endl;
    // 从小到大排序 10 20 30 100 200 300
    printDeque(d);
}

int main()
{  
    test01();
    return 0;
}