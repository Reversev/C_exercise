#include<iostream>
using namespace std;

int max(int a, int b);
int max(int a, int b);

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 100;
    int b = 200;
    cout << max(a, b) << endl;
    
    return 0;
}