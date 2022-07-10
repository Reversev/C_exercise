#include<iostream>
using namespace std;

// 函数默认参数
int func(int a, int b, int c = 30)
{
    return a + b + c;
}

int main()
{
    int a = 10;
    cout << func(a, 10) << endl;
    return 0;
}