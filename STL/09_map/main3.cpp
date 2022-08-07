#include<map>
#include<iostream>
using namespace std;

// map容器的插入和删除
void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key: " << (*it).first << " value: " << (*it).second << endl;
    }
    cout << endl;
}
void test01()
{
    map<int, int> m;
    // 第一种插入
    m.insert(pair<int, int>(1, 10));

    // 第二种插入
    m.insert(make_pair(2, 20));

    // 第三种插入
    m.insert(map<int, int>::value_type(3, 30));

    // 第四种插入
    m[4] = 40;

    // []不建议插入 用途：可以利用key访问到value
    cout << m[5] << endl;  // m.insert(pair<int, int>(5, 0))

    printMap(m);

    // 删除
    m.erase(m.begin());
    printMap(m);

    m.erase(3); // 按照key删除
    printMap(m);
    
    m.erase(m.begin(), m.end());
    // m.clear();
    printMap(m);
}

int main()
{
    test01();
    return 0;
}