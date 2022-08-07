#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

// 常用查找算法 binary_search 效率高
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // v.push_back(2);  // 如果是无序序列 结果未知！！！
    // 查找容器中是否有 9 元素 
    // 注意: 容器必须是有序序列
    bool ret = binary_search(v.begin(), v.end(), 9);
    if (ret){cout << "found it!" << endl;}
    else{cout << "not find!" << endl;}
}

int main()
{
    test01();
    return 0;
}
