#include<map>
#include<iostream>
using namespace std;

// map容器排序
class myCompare
{
    public:
        bool operator()(int v1, int v2)
        {
            return v1 > v2;  // 降序
        }
};

void printMap(map<int, int, myCompare> &m)
{
    for (map<int, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key: " << (*it).first << " value: " << (*it).second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int, int, myCompare> m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(4, 40));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(5, 50));
    printMap(m);
}

int main()
{
    test01();
    return 0;
}