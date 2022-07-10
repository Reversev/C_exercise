#include<iostream>
using namespace std;

// 占位参数
// 返回值类型 函数名（数据类型）{}
// 占位参数还可以有默认参数
void func(int a, int )
{
    cout << "This is func. " << a << endl;
}

int main()
{
    func(10, 10);
    return 0;
}