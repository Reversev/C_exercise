#include<iostream>
#include<string>
using namespace std;

// 友元
// 全局函数做友元
// 建筑物
class Building
{
    // 全局函数声明 goodGay是Building的好朋友 可以访问building中的私有成员
    friend void goodGay(Building &building);   
    public:
        Building()
        {
            m_SittingRoom = "客厅";
            m_BedRoom = "卧室";
        }
        string m_SittingRoom;
    private:
        string m_BedRoom;
    
};


// 全局函数
void goodGay(Building &building)
{
    cout << "好基友的全局函数 正在访问" << building.m_SittingRoom << endl;

    cout << "好基友的全局函数 正在访问" << building.m_BedRoom << endl;
}

void test01()
{
    Building build;
    goodGay(build);
}

int main()
{
    test01();
    return 0;
}