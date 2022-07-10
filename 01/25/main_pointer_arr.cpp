#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr; // the pointer to point arr

    cout << "the first element is: " << arr[0] << endl;
    cout << "the firsr element after the pointer is: " << *p << endl;

    for (int i = 0; i < 10; i++)
    {
        // use pointer to traverse array
        cout << *p << endl;
        p++;
    }
    
    return 0;
}