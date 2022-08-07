#include<functional>   // 内建函数对象头文件
#include<iostream>
using namespace std;

// 内建函数对象 算术仿函数
// negate 一元仿函数 取反仿函数
void test01()
{
    negate<int> n;
    cout << "-n is " << n(50) << endl;
}

// plus 二元仿函数 加法
void test02()
{
    plus<int> p;
    cout << "10 + 20 = " << p(10, 20) << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}