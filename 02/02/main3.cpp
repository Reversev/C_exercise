#include<iostream>
using namespace std;

// 引用做函数的返回值
// 1 不要返回局部变量的引用
int& test01()
{
    int a = 10;  // 局部变量存放在四区中的栈区
    return a;
}

// 2 函数的调用可以作为左值
int& test02()
{
    static int a = 10;  // 静态变量存放在四区中的全局区 全局区上的数据在程序结束后由系统释放
    return a;
}

int main()
{
    // int &ref = test01(); 
    // cout << "ref = " << ref << endl;   // 如果第一次可以打印正确的数据 是因为编译器做了保留 第二次这个数据就不再保留
    int &ref2 = test02(); 
    cout << "ref2 = " << ref2 << endl;

    test02() = 100;    // a = 100;  ref2 = a;  如果函数的返回值是引用 这个函数的调用可以作为左值
    cout << "ref2 = " << ref2 << endl;
    return 0;
}