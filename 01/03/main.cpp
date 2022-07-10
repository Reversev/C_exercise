#include <iostream>
using namespace std;

#define day 7   // the first way

/* 常量是不可以修改 */
int main()
{
    cout << "The number of days in a week is  " << day << " DAYS" << endl;

    const int month = 12;   // the second way

    cout << "The number of months in a year is " << month << " MOONTHS" << endl;

    cout << sizeof(long long) << endl; 
 
}
