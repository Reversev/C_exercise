#include<vector>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

// 常用集合算法 set_union
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
    // 取两个容器的和给目标容器需要提前开辟空间
    vtarget.resize(v1.size() + v2.size());
    
   vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
    
    for_each(vtarget.begin(), itEnd, myprint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}
