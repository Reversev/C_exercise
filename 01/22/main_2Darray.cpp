#include<iostream>
using namespace std;

int main()
{
    // type 1: type variable [row][col]
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    for (int i=0; i < 2; i++)
    {
        for (int j=0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // type 2: type variable[row][col] = {{value1, value2}, {value3, value4}}
    int arr2[2][3] = 
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    // type 3: type variable[row][col] = {value1, value2, ...}
    int arr3[2][3] = {1, 2, 3, 4, 5, 6};

    // type 4: type variable[][col] = {value1, value2, ...}
    int arr4[][3] = {1, 2, 3, 4, 5, 6};

    return 0;
}