#include<iostream>
#include<fstream>   // 1 包含头文件
#include<string>
using namespace std;

// 读文件
void test01()
{
    // 2 创建流对象
    ifstream ifs;
    // 3 打开文件 并且判断是否打开成功
    ifs.open("test.txt", ios::in);
    if ( ! ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    // 4 读数据
    // 第一种方式
    // char buf[1024] = {0};
    // while(ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    // 第二种方式
    // char buf[1024] = {0};
    // while(ifs.getline(buf, sizeof(buf)))
    // {
    //     cout << buf << endl;
    // }

    // 第三种方式
    // string buf;
    // while(getline(ifs, buf))
    // {
    //     cout << buf << endl;
    // }

    // 第四种方式
    char c;
    while((c=ifs.get()) != EOF)   // end of file 
    {
        cout << c;
    }

    // 5 关闭文件
    ifs.close();

}

int main()
{
    test01();
    return 0;
}
