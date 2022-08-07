#include<string>
#include<iostream>
using namespace std;

// 字符串查找和替换

// 1 查找

void test01()
{
    string str1 = "abcdefg";
    int pos = str1.find("de");     // 没有返回-1
    if (pos == -1){cout << "pos is not existed!" << endl;}
    else{cout << "pos = " << pos << endl;}

    // rfind 和 find 区别
    // rfind从右往左查找 find从左往右查找
    pos = str1.rfind("de");  
    cout << "pos = " << pos << endl;

}

// 2 替换
void test02()
{
    string str1 = "abcdefg";
    str1.replace(1, 3, "1111");   // bcd -> 1111
    cout << "str1 = " << str1 << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}