#include<iostream>
using namespace std;

int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "the size of 2D array: " << sizeof(arr) << endl;
    cout << "the size of each col of 2D array: " << sizeof(arr[0]) << endl;
    cout << "the size of element of 2D array: " << sizeof(arr[0][0]) << endl;

    cout << "the number of the row of 2D array: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "the number of the column of 2D array: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    // address
    cout << "the initial address: " << arr << endl;
    cout << "the address of the first row: " << arr[0] << endl;
    cout << "the address of the second row: " << arr[1] << endl;

    cout << "the address of the first element: " << &arr[0][0] << endl;
    cout << "the address of the second element: " << &arr[0][1] << endl;
    
    return 0;
}