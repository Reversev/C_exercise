#include<iostream>
using namespace std;

int main()
{
    // 在switch 语句中使用break
    cout << "Please input a intensity: " << endl;
    cout << "1 general " << endl;
    cout << "2 middle " << endl;
    cout << "3 hard " << endl;

    int num = 0;
    cin >> num;

    switch (num)
    {
        case 1:
            cout << "you choose general " << endl;
            break; 
        case 2:
            cout << "you choose middle " << endl;
            break;
        case 3:
            cout << "you choose hard " << endl;
            break;
    } 
    system("pause");

    return 0;
}