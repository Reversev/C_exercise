#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 常见拷贝和替换算法 copy
void myprint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    for_each(v1.begin(), v1.end(), myprint);
    cout << endl;

    vector<int> v2;
    v2.resize(v1.size());
    copy(v1.begin(), v1.end(), v2.begin());
    for_each(v2.begin(), v2.end(), myprint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}