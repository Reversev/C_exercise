#include<iostream>
using namespace std;
// const修饰指针有三种情况
// 1. const修饰指针----常量指针
// 2. const修饰常量----指针常量
// 3. const即修饰指针，又修饰常量
int main()
{
    int a = 10;
    int b = 10;
    
    // const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int *p1 = &a;
    p1 = &b;
    // error: *p1 = 100;

    // const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int * const p2 = &a;
    // error: p2 = &b;
    *p2 = 100;

    // const既修饰指针又修饰常量
    const int * const p3 = &a;
    // error: p3 = &b;
    // error: *p3 = 100;

    return 0;
}