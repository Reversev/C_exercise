#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

// 常用的算术生成算法 accumulate
void test01()
{
    vector<int> v;
    for (int i = 0; i <= 100; i++)
    {
        v.push_back(i);
    }

    int total = accumulate(v.begin(), v.end(), 0);  // 0: 起始累加值
    cout << "total = " << total << endl; 
}   

int main()
{
    test01();
    return 0;
}