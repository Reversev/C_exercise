#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

// 二元谓词
class MyCompare
{
    public:
        bool operator()(int val1, int val2)
        {
            return val1 > val2;
        }
};
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    // 默认从小到大
    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " "; 
    }
    cout << endl;

    // 使用函数对象 改变算法策略 变为排序规则为从大到小
    sort(v.begin(), v.end(), MyCompare());
    cout << "------------------------------------" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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