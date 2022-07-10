#include<iostream>
using namespace std;

// 函数重载 可以让函数名相同 提高复用性
// 函数重载的满足条件
// 1 在同一个作用域下
// 2 函数名称相同
// 3 函数参数类型不同 或者个数不同 或者顺序不同
// 注意：不能以不同返回值作为函数重载的条件
void func()
{
    cout << "func 的调用1 " << endl;
}

void func(int a)
{
    cout << "func 的调用2 (int) " << endl;
}

void func(double a)
{
    cout << "func 的调用3 (double) " << endl;
}

void func(double a, int b)
{
    cout << "func 的调用4 (double int)  " << endl;
}

void func(int a, double b)
{
    cout << "func 的调用5 (int double) " << endl;
}


int main()
{
    func();

    func(10);
    
    func(3.14);

    func(10, 3.14);

    func(3.14, 10);

    return 0;
}