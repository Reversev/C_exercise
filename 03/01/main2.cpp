#include<iostream>
using namespace std;

// 函数模板注意事项
// 1 自动类型推导 必须推导出一致的数据类型才可以使用
template<class T>
void mySwap(T &a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    // swapInt(a, b);
    // 利用函数模板交换  两种方式使用模板： 1 自动类型推导  2 显式指定类型
    // mySwap(a, b);       // 1
    mySwap<int>(a, b);     // 2
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double c = 0.1;
    double d = 0.2;
    // swapDouble(c, d);
    // mySwap(c, d);       // 1
    mySwap<double>(c, d);  // 2
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}

// 2 模板必须要确定T的数据类型 才可以使用
template<class T>
void func()
{
    cout << "func 的调用" << endl;
}

void test02()
{
    // func();   // error
    func<int>();
}

int main()
{
    test01();
    return 0;
}