#include<list>
#include<iostream>
using namespace std;

// list 插入和删除
/*
    push_back(elem);//在容器尾部加入一个元素
    pop_back();//删除容器中最后一个元素
    push_front(elem);//在容器开头插入一个元素
    pop_front();//从容器开头移除第一个元素
    insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
    insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
    insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
    clear();//移除容器的所有数据
    erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
    erase(pos);//删除pos位置的数据，返回下一个数据的位置。
    remove(elem);//删除容器中所有与elem值匹配的元素
*/

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
    // 尾插
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);

    // 头插
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    printList(l1);   // 300 200 100 10 20 30

    // 尾删
    l1.pop_back();
    printList(l1);  // 300 200 100 10 20

    // 头删
    l1.pop_front();
    printList(l1);   // 200 100 10 20

    // insert插入
    l1.insert(l1.begin(), 1000);
    printList(l1);   // 1000 200 100 10 20
    list<int>::iterator it = l1.begin();
    l1.insert(++it, 200);
    printList(l1);  // 1000 200 200 100 10 20

    // 删除
    it = l1.begin();
    l1.erase(++it);   // 需提供迭代器
    printList(l1);  // 1000 200 100 10 20

    // 移除
    l1.push_back(10000);
    l1.push_back(10000);
    l1.push_back(10000);
    printList(l1);  // 1000 200 100 10 20 10000 10000 10000
    l1.remove(10000);
    printList(l1);  // 1000 200 100 10 20

    // 清空
    l1.clear();
    printList(l1);
}

int main()
{
    test01();
    return 0;
}