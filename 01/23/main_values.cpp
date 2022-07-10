#include<iostream>
using namespace std;
// int add(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }
// int main()
// {
//     int a = 10;
//     int b = 10;
//     int sum = add(a, b);
//     cout << "sum = " << sum << endl;

//     a = 100;
//     b = 100;

//     sum = add(a, b);
//     cout << "sum = " << sum << endl;
//     return 0;
// }

void swap(int num1, int num2)
{
    cout << "before swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "after swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // return ;
}

int main()
{
    int a = 10;
    int b = 20;
    
    swap(a, b);

    cout << "(main) a = " << a << endl;
    cout << "(main) b = " << b << endl;
    
    return 0;
}