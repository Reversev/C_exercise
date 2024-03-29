#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 常用拷贝和替换算法 replace_if
class myprint
{
    public:
        void operator()(int val)
        {
            cout << val << " ";
        }
};

class Greater30
{
    public:
        bool operator()(int val)
        {
            return val >= 30;
        }
};
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(30);

    cout << "------------------before replace----------------" << endl; 
    for_each(v.begin(), v.end(), myprint());
    cout << endl;

    // 将大于等于30 替换为3000
    replace_if(v.begin(), v.end(), Greater30(), 3000);
    cout << "------------------after replace----------------" << endl; 
    for_each(v.begin(), v.end(), myprint());
    cout << endl;    

}

int main()
{
    test01();
    return 0;
}