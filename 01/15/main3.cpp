#include<iostream>
using namespace std;

int main()
{
    // multipy table
    for (int i = 1; i < 10; i++)
    {
        // cout << i << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << j * i << "\t"; 
        }
        cout << endl;
    }
    return 0;
}