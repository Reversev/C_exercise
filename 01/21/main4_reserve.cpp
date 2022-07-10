#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 5, 4};    // 0-1-2-3-4
    int len = sizeof(arr) / sizeof(arr[0]);
    // cout << len/2 << endl;
    for(int i=0; i < len/2 + 1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;          
    }
    for (int num=0; num < len; num++)
    {
        cout << arr[num];
    }
    cout << endl;
    return 0;
}