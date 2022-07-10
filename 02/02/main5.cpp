#include<iostream>
using namespace std;

// 常量引用

void ShowValue(const int &value)    // const 防止数据修改
{
    cout << "val = " << value << endl;
}
int main()
{   
    // 使用场景 用来修饰形参 防止误操作
    int a = 10;

    // 加上const后 编译器将代码修改 int temp = 10; const int & ref = temp;
    const int &ref = 10;   // 引用必须引一块合法的内存空间 堆区和栈区
    // ref = 20;  // 加入const后变为只读 不可修改

    int b = 100;
    ShowValue(b);
    return 0;
}