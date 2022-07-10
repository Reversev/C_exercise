#include<iostream>
using namespace std;

int main()
{
    // the define of the pointer
    int a = 10;

    // language: type * variable
    int * p;

    // assigned 
    p = &a;
    cout << &a << endl;  // print the address of a
    cout << p << endl;  // print pointer variable p

    // the use of the pointer by "*" to the memory of pointer
    cout << "*p = " << *p << endl;
    
    return 0;
}