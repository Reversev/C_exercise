#include<map>
#include<iostream>
using namespace std;

// map容器 查找和统计
void test01()
{   
    // 查找
    map<int, int> m;
    m.insert(pair<int ,int>(1, 10));
    m.insert(pair<int ,int>(2, 20));
    m.insert(pair<int ,int>(3, 30));
    map<int, int>::iterator pos = m.find(3);
    
    if (pos != m.end())
    {
        cout << "found the element: key = " << (*pos).first << " value = " << pos->second << endl;
    }
    else {cout << "not found the element!" << endl;}
    
    // 统计
    // map不允许插入重复的key count统计而言 要么是1 要么是0 
    // multimap的统计可能大于1
    int num = m.count(3);
    cout << "the number of the element is " << num << endl;

}

int main()
{
    test01();
    return 0;
}