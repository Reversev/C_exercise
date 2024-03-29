#include<vector>
#include<numeric>
#include<algorithm>
#include<iostream>
using namespace std;

// 常用算术生成算法 fill
void myprint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.resize(10);  // 指定大小

    // 后期重新填充
    fill(v.begin(), v.end(), 100);

    for_each(v.begin(), v.end(), myprint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}