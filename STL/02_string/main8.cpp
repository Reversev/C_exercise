#include<string>
#include<iostream>
using namespace std;

// string子串
void test01()
{
    string str = "abcdef";
    string subStr = str.substr(1, 3);  // 从1位置开始3个字符
    cout << "substr = " << subStr << endl;
}

void test02()
{
    string email = "hello@sina.com";
    // 从邮件的地址获取用户名信息
    int pos = email.find('@');
    string usrName = email.substr(0, pos);
    cout << "usrName = " << usrName << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}