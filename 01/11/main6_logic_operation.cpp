#include <iostream>
using namespace std;
// logic operation  not

int main()
{
    int a = 0;
    
    // not
    cout << !a << endl;  // 1

    cout << !!a << endl; // 0

    // and
    a = 10;
    int b = 10;
    cout << (a && b) << endl;  // 1

    a = 10;
    b = 0;

    cout << (a && b) << endl;  // 0

    a = 0;
    b = 0;

    cout << (a && b) << endl;  // 0

    // or 
    a = 10;
    b = 10;
    cout << (a || b) << endl;  // 1

    a = 10;
    b = 0;
    cout << (a || b) << endl;  // 1

    a = 0;
    b = 0;
    cout << (a || b) << endl;  // 0

    system("pause");

    return 0;
}