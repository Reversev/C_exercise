#include<iostream>
using namespace std;
//switch

int main()
{
    // score for movies
    // 10 - 9: classic
    // 8 - 7 : very good
    // 6 - 5 ：general
    // below 5: bad

    int score = 0;
    cout << "Please input a score: " ;
    cin >> score;

    switch (score)
    {
        case 10:  // case 9
        case 9: cout << "classic " << endl;
                break;
        case 8: cout << "very good " << endl;
                break;
        case 7:   // case 6
        case 6: cout << "general " << endl;
                break;
        default:
                cout << "bad " << endl;
                break;
    }

    system("pause");

    return 0;
}