#include<iostream>
using namespace std;

int main()
{
    // use name of the array
    // 1/ get the usage memory
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "the usage memory of the whole array: " << sizeof(arr) << endl;
    cout << "the usage memory of the element: " << sizeof(arr[0]) << endl;
    cout << "the number of elements in the array: " << sizeof(arr)/sizeof(arr[0]) << endl;

    // 2 use the name of the variable to get the inital address 
    cout << "the inital address of the array: " << (int*)arr << endl;
    cout << "the address of the first element of the array: " << (int*)&arr[0] << endl;
    cout << "the address of the second element of the array: " << (int*)&arr[1] << endl;
    
    // arr=100; error: the array is constant and is not assigned
    system("pause");
    
    return 0;
}