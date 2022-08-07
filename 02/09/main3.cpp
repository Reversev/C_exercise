#include<iostream>
using namespace std;

//
class Base
{
    public:
        int m_A;
    protected:
        int m_B;
    private:
        int m_C;   // 私有成员只是被隐藏了 但是还是会继承下去
};

// 公共继承
class Son: public Base
{
    public:
        int m_D;
};

// vs2017可以利用开发人员命令行提示工具查看对象模型
// cl /dl reportSingleClassLayout查看的类名 所属文件名
void test01()
{
    // 父类中的所有非静态成员属性都会被子类继承下去
    // 父类中私有的成员属性 被编译器隐藏了 因此访问不到 但确实被继承下去了
    cout << "the size of Son: " << sizeof(Son) << endl;   // 16 = 4 + 3 * 4 
}

int main()
{
    test01();
    return 0;
}