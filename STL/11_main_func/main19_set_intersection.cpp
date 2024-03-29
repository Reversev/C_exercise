#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

// 常用的集合算法 set_intersection
// 原容器必须为有序序列
void myprint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);      // 0 - 9
        v2.push_back(i + 5);  // 5 -14
    }

    vector<int> vtarget;
    // 取两个里面较小的值给目标容器需要提前开辟空间
    vtarget.resize(min(v1.size(), v2.size()));

    // 获取交集
    vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

    // itEnd.end()!!!
    for_each(vtarget.begin(), itEnd, myprint);
    cout << endl;
}   

int main()
{
    test01();
    return 0;
}