# include<iostream>
using namespace std;
// input form the keyboard
int main()
{
    // int type as input
    int a = 0;
    cout << "Please input the variable (int): " << endl;
    cin >> a;
    cout << a << endl;

    // float type as input
    double d = 0;
    cout << "Please input the variable (float): " << endl;
    cin >> d;
    cout << d << endl;

    // string type as input 
    string str;
    cout << "Please input the variable (string): " << endl;
    cin >> str;
    cout << str << endl;

    // bool type as input 
    bool flag = true;
    cout << "Please input the variable (bool) " << endl;
    cin >> flag;
    cout << flag << endl;
    system("pause");
    return EXIT_SUCCESS;
}