#include<iostream>
using namespace std;

// pair 对组的创建
void test01()
{
    // 第一种方式
    pair<string, int> p ("Tom", 20);
    cout << "name: " << p.first << " age: " << p.second << endl;

    // 第二种方式
    pair<string, int> p2 = make_pair("Jerry", 18);
    cout << "name: " << p.first << " age: " << p.second << endl;
}

int main()
{
    test01();
    return 0;
}