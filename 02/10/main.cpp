#include<iostream>
using namespace std;

// 多态
// 动物类
class Animal
{
    public:
        // 虚函数 virtual
        // 函数前面加上virtual关键字 变成虚函数 那么编译器在编译的时候就不能确定函数调用了
        virtual void speak()    // 不加virtual: 1个字节 加上: 4个字节 指针
        {
            cout << "动物在说话" << endl;
        }
};

// 猫类
class Cat: public Animal
{
    public:
        // 重写 函数返回值类型 函数名 参数列表 完全相同
        void speak()       // vistual可写可不写
        {
            cout << "小猫在说话" << endl;
        }
};

// 狗类
class Dog: public Animal
{
    public:
        void speak()
        {
            cout << "小狗在说话" << endl;
        }
};

// 执行说话的函数
// 地址早绑定 在编译阶段确定函数地址
// 如想执行让猫说话 那么这个函数地址就不能提前绑定 需要在运行阶段再绑定 即地址晚绑定

// 动态多态满足条件
// 1 有继承关系
// 2 子类重写父类的虚函数

// 动态多态使用
// 父类的指针和引用 指向子类的对象
void doSpeak(Animal &animal)   // Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);    
}

int main()
{   
    test01();
    return 0;
}