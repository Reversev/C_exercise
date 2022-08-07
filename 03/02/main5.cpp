#include<iostream>
#include<string>
using namespace std;

// 类模板与继承
template<class T>
class Base
{
    T m;
};
// class Son: public Base{};   // error 必须要知道父类中T的数据类型才能给子类
class Son1: public Base<int>{};

void test01()
{
    Son1 s1;
}

// 如果想灵活地指定父类中T的数据类型 子类需要变为类模板
template<class T, class T1>
class Son2: public Base<T1>
{
    public:
        Son2()
        {
            cout << "T的类型为: " << typeid(T).name() << endl;
            cout << "T1的类型为: " << typeid(T1).name() << endl;
        }
        T obj;
};

void test02()
{
    Son2<int, char> s2;
}

int main()
{
    test01();
    test02();
    return 0;
}