#include<iostream>
using namespace std;

// 重载递增运算符
// 自定义整型
class MyInteger
{
    friend ostream& operator<<(ostream &out, MyInteger myint);
    public:
        MyInteger()
        {
            m_Num = 0;
        }

        // 重载前置++运算符
        MyInteger& operator++()   // 返回引用只为了对一个数据进行递增操作
        {
            m_Num++;       // 先做++运算
            return *this;  // 后返回自身(引用)
        }
        // 重载后置++运算符
        MyInteger operator++(int)  // int 代表占位参数 可用于区分前置和后置递增
        {
            // 先记录当时的结果 
            MyInteger temp = *this;
            // 后递增
            m_Num++;
            // 最后将记录结果做返回(值)
            return temp;
        }

    private:
        int m_Num;
};

// 重载左移运算符
ostream& operator<<(ostream &out, MyInteger myint)
{
    out << myint.m_Num;
    return out;
}

void test01()
{
    MyInteger myint;
    cout << ++myint << endl;
}

void test02()
{
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    test02();
    return 0;
}