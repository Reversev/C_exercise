#include<iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "Please input a score: " << endl;
    cin >> score;

    if (score > 600)
    {
        cout << "Can do ONE" << endl;
        if (score > 700)
        {
            cout << "Firstly " << endl;
        }
        else if (score > 650)
        {
            cout << "Secondly " << endl;
        }
        else
        {
            cout << "Thirthly " << endl;
        }
    }
    else if (score > 500)
    {
        cout << "Can do TWO" << endl;
    }
    else if (score > 400)
    {
        cout << "Can do THREE" << endl;
    }
    else {cout << "LAST" << endl;}

    system("pause");

    return 0;
}