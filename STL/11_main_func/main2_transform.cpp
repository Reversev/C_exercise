#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 常用的遍历算法 transform
class Transform
{
    public:
        int operator()(int v)
        {
            return v + 10;
        }
};

class MyPrint
{
    public:
        void operator()(int val)
        {
            cout << val << " ";
        }
};
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), MyPrint());
    cout << endl;
    
    vector<int> v_target;        // 目标容器
    v_target.resize(v.size());   // 目标容器 需要提前开辟空间
    transform(v.begin(), v.end(), v_target.begin(), Transform());

    for_each(v_target.begin(), v_target.end(), MyPrint());
    cout << endl;

}

int main()
{
    test01();
    system("pause");
    return 0;
}