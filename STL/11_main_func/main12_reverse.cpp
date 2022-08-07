#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 常用的排序算法 reverse
void myprint(int val)
{
    cout << val << " "; 
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    cout << "--------------before reverse------------------" << endl;
    for_each(v.begin(), v.end(), myprint);
    cout << endl;

    cout << "--------------after reverse------------------" << endl;
    reverse(v.begin(), v.end());
    for_each(v.begin(), v.end(), myprint);
    cout << endl;    
}

int main()
{
    test01();
    return 0;
}