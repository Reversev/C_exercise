#include<map>
#include<iostream>
using namespace std;

// map容器大小和交换
void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key: " << (*it).first << " value: " << (*it).second << endl;
    }
    cout << endl;
}
// 大小
void test01()
{
    map<int, int> m;
    m.insert(pair<int, int> (1, 10));
    m.insert(pair<int, int> (4, 40));
    m.insert(pair<int, int> (3, 30));
    m.insert(pair<int, int> (2, 20));

    if (m.empty())
    {
        cout << "m is empty!" << endl;
    }
    else
    {
        cout << "m is not empty!" << endl;
        cout << "the size of m is " << m.size() << endl;
    }
}

// 交换
void test02()
{
    map<int, int> m1;
    m1.insert(pair<int, int> (1, 10));
    m1.insert(pair<int, int> (4, 40));
    m1.insert(pair<int, int> (3, 30));
    m1.insert(pair<int, int> (2, 20));

    map<int, int> m2;
    m2.insert(pair<int, int> (6, 600));
    m2.insert(pair<int, int> (5, 500));
    m2.insert(pair<int, int> (8, 800));
    m2.insert(pair<int, int> (7, 700));

    cout << "--------------before swap---------------" << endl;
    printMap(m1);
    printMap(m2);

    cout << "---------------after swap---------------" << endl;
    m1.swap(m2);
    printMap(m1);
    printMap(m2);

}
int main()
{
    test01();
    test02();
    return 0;
}