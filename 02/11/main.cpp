#include<iostream>
#include<fstream>    // 1 包含头文件
using namespace std;

// 文本文件 写文件
void test01()
{
    // 2 创建流对象
    ofstream ofs;
    // 3 指定打开方式
    ofs.open("test.txt", ios::out);
    // 4 写内容
    ofs << "Name: zhangsan" << endl;
    ofs << "Sex: man" << endl;
    ofs << "Age: 18" << endl;
    // 关闭文件
    ofs.close();

    fstream fs;
    fs.open("test.txt", ios::out | ios::app);
    fs << "Name: lisi" << endl;
    fs << "Sex: man" << endl;
    fs << "Age: 20";
    fs.close();
}

int main()
{
    test01();
    return 0;
}