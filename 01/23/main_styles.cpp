#include<iostream>
using namespace std;


// 1 no parameters and no return values
void test01()
{
    // void a = 10;   // error
    cout << "this is test01" << endl;
    // test01(); 
}

// 2 have parameters and no return values
void test02(int a)
{
    cout << "this is test02" << endl;
    cout << "a = " << a << endl;
}

// 3 no parameters and have return values
int test03()
{
    cout << "this is test03" << endl;
    return 10;
}

// 4 have parameters and return values
int test04(int a, int b)
{
    cout << "this is test04" << endl;
    int sum = a + b;
    return sum;
}

int main()
{

    return 0;
}