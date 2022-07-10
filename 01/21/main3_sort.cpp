#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {300, 350, 200, 400, 250};
    int max = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {
        // cout << arr[i] << endl;
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the max is: " << max << endl;
    
    return 0;
}