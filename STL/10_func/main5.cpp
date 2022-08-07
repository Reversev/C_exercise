#include<functional>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

// 内建函数对象 关系仿函数
// 大于greater
class mycompare
{
    public:
        bool operator()(int v1, int v2)
        {
            return v1 > v2;
        }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 降序
    sort(v.begin(), v.end(), mycompare());
    // greater<int>() 内建的函数对象 大于仿函数
    // sort(v.begin(), v.end(), greater<int>());
    for (vector<int>::iterator itt = v.begin(); itt != v.end(); itt++)
    {
        cout << *itt << " ";
    }
    cout << endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}
