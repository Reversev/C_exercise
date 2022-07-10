#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "Please input your score: " << endl;

    cin >> score;

    if (score > 600)
    {
        cout << "Can do firstly" << endl;
    }
    else if (score > 500)
    {
        cout << "Can do secondly" << endl;
    }
    else if (score > 400)
    {
        cout << "Can do thirthly" << endl;
    }
    else{cout << "Can not do" << endl;}

    system("pause");
    return 0;
}