#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 常用查找算法 adjacent_find
void test01()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);

    vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
    if (pos == v.end())
    {
        cout << "not found adjacent elements!" << endl;
    }
    else
    {
        cout << "found adjacent elements! " << *pos << endl;
    }
}   

int main()
{
    test01();
    return 0;
}