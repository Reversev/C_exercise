#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 常用拷贝和替换算法 replace
class myprint
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
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(10);
    v.push_back(20);

    cout << "---------------before replace----------------" << endl;
    for_each(v.begin(), v.end(), myprint());
    cout << endl;

    cout << "---------after replace (20 -> 2000)----------" << endl;
    replace(v.begin(), v.end(), 20, 2000);
    for_each(v.begin(), v.end(), myprint());
    cout << endl;    

}

int main()
{
    test01();
    return 0;
}