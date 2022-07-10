#include <iostream>
using namespace std;

// calculate operation %
int main()
{
    int a1 = 10;
    int b1 = 3;

    cout << 10 % 3 << endl;

    int a2 = 10;
    int b2 = 20;

    cout << a2 % b2 << endl;

    int a3 = 10;
    int b3 = 0;
    // cout << a3 % b3 << endl; //  divided number is not be set 0

    // Two decimals cannot be modulo
    double d1 = 3.14;
    double d2 = 1.1;

    // cout << d1 % d2 << endl;

    system("pause");
    return 0;

}