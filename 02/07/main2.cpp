#include<iostream>
using namespace std;

// 成员函数做友元
class Building;

class GoodGay
{
    public:
        GoodGay();

        void visit();   // 让visit可以访问Building中的私有成员
        void visit2();   // 让visit2不可以访问Building中的私有成员

        Building *building;
};

class Building
{
    friend void GoodGay::visit();  // *** 告诉编译器GoodGay下的visit函数作为本类的好朋友 可以访问私有内容
    public:
        Building();
        string m_SettingRoom;
    private:
        string m_BedRoom;
};

Building::Building()
{
    m_SettingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "visit 函数正在访问 " << building -> m_SettingRoom << endl;
    cout << "visit 函数正在访问 " << building -> m_BedRoom << endl;
}

void GoodGay::visit2()
{
    cout << "visit2 函数正在访问 " << building -> m_SettingRoom << endl;
    // cout << "visit2 函数正在访问 " << building -> m_BedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main()
{
    test01();
    return 0;
}