#include<iostream>
using namespace std;
int add(int num1, int num2);

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    // define function 
    int a1 = 100;
    int a2 = 90;
    cout << add(a1, a2) << endl;
    return 0;
}
