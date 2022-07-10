#include<iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "Please input a score: " << endl;
    cin >> score;

    if (score > 600)
    {
        cout << "Can do" << endl;
    }
    else
    {
        cout << "Can not do " << endl;
    }

    system("pause");
    return 0;
}