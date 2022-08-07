#include<iostream>
using namespace std;

// 1 构造函数的分类和调用
// 分类
// 按照参数分类 无参构造（默认构造）和有参构造
// 按照类型分类 普通构造 拷贝构造
class Person
{
    public:
        // 构造函数
        Person()
        {
            cout << "Person的无参构造函数调用" << endl;   // 无参构造又称默认构造
        }

        Person(int a)
        {
            age = a;
            cout << "Person的有参构造函数调用" << endl;
        }

        // 拷贝构造函数
        Person(const Person &p)
        {
            cout << "Person的拷贝构造函数调用" << endl;
            age = p.age;  // 将传入的类的所有属性拷贝到当前对象上
        }   

        ~Person()
        {
            cout << "Person的析构函数调用" << endl;
        }

    int age;

};

void test01()
{
    Person p1;  // 默认构造函数的调用  不要加()
    // 1 括号法
    Person p2(10);  // 有参构造函数
    Person p3(p2);  // 括号法调用拷贝构造函数

    cout << "p2的年龄: " << p2.age << endl;
    cout << "p3的年龄: " << p3.age << endl;

    // 注意事项1： 调用默认构造函数时 不要加() 
    //            Person p1(); 因为这行代码 编译器会认为是一个函数的声明

    // 2 显式法
    Person p1;
    Person p2 = Person(10);  // 有参构造   
    // Person(10)；          // 匿名对象 特点：当前行执行结束后 系统会立即回收掉匿名对象
    cout << "aaa" << endl;   // 构造 析构 aaa
    Person p3 = Person(p2);  // 拷贝构造

    // 注意事项2： 不要利用拷贝构造函数 初始化匿名对象 
    //            Person(p3); 编译器会认为Person(p3) == Person p3; 对象的声明

    // 3 隐式转换法
    Person p4 = 10;  // 相当于 Person p4 = Person(10); 有参构造的调用
    Person p5 = p4;  // 拷贝构造
}

int main()
{
    test01();
    return 0;
}