#include<vector>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

// 常用集合算法 set_different
// 容器为有序序列
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
    // //取两个里面较大的值给目标容器需要提前开辟空间
    vtarget.resize(max(v1.size(), v2.size()));
    
    cout << "v1 和 v2 的差集：" << endl;
    vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
    
    for_each(vtarget.begin(), itEnd, myprint);
    cout << endl;

    cout << "v2 和 v1 的差集：" << endl;
    itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vtarget.begin());
    
    for_each(vtarget.begin(), itEnd, myprint);
    cout << endl;    
}

int main()
{
    test01();
    return 0;
}
