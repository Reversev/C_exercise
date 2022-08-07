#include<stack>
#include<iostream>
using namespace std;

// 栈stack容器
void test01()
{
    // 特点： 先进后出(FILO)数据结构
    stack<int> stk;

    // 入栈
    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout << "the size of stk is " << stk.size() << endl;

    // 只要栈不为空就查看栈顶 并且执行出栈
    while (!stk.empty())
    {
        // cout << "the stack is not empty!" << endl;
        // 查看栈顶元素
        cout << "the stack is " << stk.top() << endl;
        //出栈
        stk.pop(); 
    }

    cout << "the size of stk is " << stk.size() << endl;
}

int main()
{
    test01();
    return 0;
}