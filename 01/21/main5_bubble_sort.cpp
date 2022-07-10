#include<iostream>
using namespace std;

int main()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i < len-1; i++)  // the total epoch: epoch = len - 1
    {
        for (int j=0; j<len-1-i; j++)  // compare times: len - epoch - 1
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    for (int i=0; i < len; i++)
    {cout << arr[i] << endl;}
    return 0;
}