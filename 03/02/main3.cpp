#include<iostream>
using namespace std;

// 类模板中成员函数创建时机
// 类模板中成员函数在调用时才调用
class Person1
{
    public:
        void showPerson1()
        {
            cout << "Person show1" << endl;
        }
};

class Person2
{
    public:
        void showPerson2()
        {
            cout << "Person show2" << endl;
        }
};

template<class T>
class myClass
{
    public:
        T obj;
        // 类模板中的成员函数
        void func1()
        {
            obj.showPerson1();
        }

        void func2()
        {
            obj.showPerson2();
        }
};

void test01()
{
    myClass<Person1> m;
    m.func1();
    // m.func2();   // error
}

int main()
{
    return 0;    
}