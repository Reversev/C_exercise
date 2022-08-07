#include<set>
#include<iostream>
using namespace std;

// set 容器和 multiset 容器的区别
void test01()
{
    set<int> s1;
    pair<set<int>::iterator, bool> ret = s1.insert(10);
    
    if (ret.second)
    {
        cout << "the first time succeed!" << endl;
    }
    else{cout << "the first time failed!" << endl;}

    ret = s1.insert(10);
    if (ret.second)
    {
        cout << "the second time succeed!" << endl;
    }
    else{cout << "the second time failed!" << endl;}

    multiset<int> ms;
    // 允许插入重复值
    ms.insert(10);
    ms.insert(10);
    for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

int main()
{
    test01();
    return 0;
}