# include<iostream>
using namespace std;

int main()
{
    // Backward increased
    int a = 10;
    a++; // a = a + 1
    cout << a << endl;  // 11

    //forward increased 
    int b = 10;
    ++b; 
    cout << b << endl; // 11

    // discrepancy
    // forward increased for the variable "++" and then calculate the expression
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << b2 << endl;  // 110

    // backward increased to calculate and then "++" for the variable
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << b3 << endl;  // 100

    system("pause");

    return 0; 
      
}