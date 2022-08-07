#include<set>
#include<iostream>
using namespace std;

// set插入和删除
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
    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(30);
    printSet(s1);  // 10 20 30 40

    // 删除
    s1.erase(s1.begin());  // 20 30 40
    printSet(s1);

    // 删除重载版本
    s1.erase(30);
    printSet(s1);

    // 清空
    s1.erase(s1.begin(), s1.end());
    printSet(s1);

    // 清除
    s1.clear();
    printSet(s1);
}

int main()
{
    test01();
    return 0;
}