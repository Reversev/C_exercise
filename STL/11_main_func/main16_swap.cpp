#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

// 常用拷贝和替换算法 swap  
// 注意：相同类型容器的交换 大小可以不一样
void myprint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 1);
    }
    v2.push_back(11);

    cout << "----------------before swap--------------" << endl;
    for_each(v1.begin(), v1.end(), myprint);
    cout << endl;
    for_each(v2.begin(), v2.end(), myprint);
    cout << endl;

    swap(v1, v2);
    cout << "----------------before swap--------------" << endl;
    for_each(v1.begin(), v1.end(), myprint);
    cout << endl;
    for_each(v2.begin(), v2.end(), myprint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}