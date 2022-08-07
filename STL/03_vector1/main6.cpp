#include<iostream>
#include<vector>
using namespace std;

// vector 容器互换
void printVector(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for (int i = 0; i< 10; i++)
    {
        v1.push_back(i);
    }
    cout << "before swap: " << endl; 
    printVector(v1);

    vector<int> v2;
    for (int i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    printVector(v2);

    cout << "after swap: " << endl; 
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

// 实际用途 ： 巧用swap可以收缩内存空间
void test02()
{
    vector<int> v2;
    for (int i = 0; i < 100000; i++)
    {
        v2.push_back(i);
    }
    cout << "the capacity of v2 is " << v2.capacity() << endl;  // 131072
    cout << "the size of v2 is " << v2.size() << endl;     // 100000

    v2.resize(3);
    cout << "the capacity of v2 is " << v2.capacity() << endl;  // 131072
    cout << "the size of v2 is " << v2.size() << endl;    // 3
 
    // 巧用swap收缩内存
    vector<int>(v2).swap(v2);   // vector<int>(v2)匿名对象  .swap(v2)容器交换
    cout << "the capacity of v2 is " << v2.capacity() << endl;  // 3
    cout << "the size of v2 is " << v2.size() << endl;    // 3
} 

int main()
{
    test01();
    test02();
    return 0;
}
