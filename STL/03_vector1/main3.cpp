#include<vector>
#include<iostream>
using namespace std;

// vector 容器的容量和大小操作
void printVector(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())   // 为真代表容器为空
    {
        cout << "v1 is empty." << endl;
    }
    else
    {
        cout << "v1 is not empty and the capacity is " << v1.capacity() << endl;
        cout << "the size of v1 is " << v1.size() << endl;
    }

    // 重新指定大小
    v1.resize(15, 100);  // 利用重载版本 可以指定默认填充值（参数2）
    printVector(v1);  // 如重新指定比原来长 默认用0填充新的位置

    v1.resize(12);
    printVector(v1);  // 如重新指定比原来短 超出部分会被删除
    // 0 1 2 3 4 5 6 7 8 9 100 100
}

int main()
{
    test01();
    return 0;
}
