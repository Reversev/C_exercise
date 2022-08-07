#include<list>
#include<iostream>
using namespace std;

// 
void printList(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> l1;
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(10);
    l1.push_back(50);
    cout << "before reserve: " << endl;
    printList(l1);

    // 反转
    l1.reverse();
    cout << "after reserve: " << endl;
    printList(l1);
}

bool myCompare(int v1, int v2)
{
    // 降序 让第一个数大于第二个数
    return v1 > v2;
}

// 排序
void test02()
{
    list<int> l1;
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(10);
    l1.push_back(50);
    cout << "before sorted: " << endl;
    printList(l1);

    // 所有不支持随机访问迭代器的容器 不可以用标准算法
    // 不支持随机访问迭代器的容器 内部会提供对应的一些算法
    l1.sort();
    cout << "after sorted: " << endl;  // 从小到大
    printList(l1);
    l1.sort(myCompare);
    cout << "after sorted: " << endl;  // 从大到小
    printList(l1);
}

int main()
{
    test01();
    test02();
    return 0;
}