#include<iostream>
using namespace std;
// char 

int main()
{
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    // ch = "abcde";    // error 
    // ch = 'abcde';       // error 

    cout << int(ch) << endl;
    ch = 97;
    cout << ch << endl;

    system("pause");

    return 0;

}