#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num = 100;
    do
    {
        int a = num / 100;
        int b =  num / 10 % 10;
        int c = num % 10; 
        if (a*a*a + b*b*b + c*c*c == num)
        {
            cout << a << ' ' << b  << ' ' << c << " :" << num << endl;
        }
        num++;
    } while (num < 1000);

    return 0;
    
}