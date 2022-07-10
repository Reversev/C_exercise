#include<iostream>
using namespace std;
// array

int main()
{
    // 1: type variable[the number of elements]
    int score[10];

    // Using subscript assignment
    score[0] = 100;
    score[1] = 99;
    score[2] = 85;

    //  Using subscript output
    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;
    
    // 2:  type variable[the number of the elements] = {value1, value2, ...};
    // If there are less than 10 data in {}, the remaining data will be filled with 0
    int score2[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};

    for (int i = 0; i < 10; i++)
    {
        cout << score2[i] << endl;
    }
   
    // 3: type variable[] = {value1, value2, ...}
    int score3[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    
    for (int i = 0; i < 10; i++)
    {
        cout << score3[i] << endl;
    }

    system("pause");

    return 0;
}