#include<list>
#include<iostream>
using namespace std;

// list 数据存取
void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    // 不可用[]和at()访问list中的元素 因为list本质是一个链表 不是用连续线性空间存储数据 迭代器也是不支持随机访问的
    cout << "the first element is " << l1.front() << endl;
    cout << "the last element is " << l1.back() << endl;

    // 验证迭代器不支持随机访问
    // list<int>::iterator it = l1.begin();
    // it++;   // 支持双向
    // it--;
    // it = it + 1;   error
}

int main()
{
    test01();
    return 0;
}