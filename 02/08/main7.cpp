#include<iostream>
using namespace std;

// 函数调用运算符重载
// 打印输出类
class MyPrint
{
    public:
        // 重载函数调用运算符
        void operator()(string test)  // 仿函数 使用时类似于函数
        {
            cout << test << endl; 
        }
};

void myprint02(string test)
{
    cout << test << endl; 
}

void test01()
{
    MyPrint myprint;
    myprint("hello world!");  // 由于使用起来非常类似于函数调用 因此称为仿函数
}

// 仿函数非常灵活 没有固定的写法
// 加法类
class MyAdd
{
    public:
        int operator()(int num1, int num2)
        {
            return num1 + num2;
        }
};

void test02()
{
    MyAdd myadd;
    int ret = myadd(10, 100);
    cout << "ret = " << ret << endl;

    // 匿名函数对象
    cout << MyAdd()(10, 100) << endl;
}

int main()
{
    test01();
    myprint02("hello world!");
    test02();
    return 0;
}