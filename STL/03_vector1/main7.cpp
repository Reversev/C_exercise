#include<iostream>
#include<vector>
using namespace std;

// vector 容器 预留空间
void printVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    vector<int> v;

    // 利用reserve预留空间
    v.reserve(100000);

    int num = 0; // 统计新开空间开辟次数
    int *p = NULL;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    // printVector(v);
    cout << "num = " << num << endl;   // 18

}

int main()
{
    test01();
    return 0;
}