#include<iostream>
#include<string>
using namespace std;

// 字符串比较
void test01()
{
    string str1 = "hello";
    string str2 = "hello";

    if (str1.compare(str2) == 0)
    {
        cout << "str1 is equal to str2." << endl;
    }
    else if (str1.compare(str2) > 0)
    {
        cout << "str1 is larger than str2." << endl;
    }
    else{cout << "str1 is smaller than str2." << endl;}
}

int main()
{  
    test01();
    return 0;
}