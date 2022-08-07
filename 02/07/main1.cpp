#include<iostream>
using namespace std;

// 类做友元
class Building;  // 提前定义初始化

class GoodGay
{
    public:
        GoodGay();
        void visit();      // 参观函数访问Building中的属性

    private:
        Building *building;
};


class Building 
{
    friend class GoodGay;  // class GoodGay是本类的好朋友 可以访问类中的私有内容
    public:
        Building();
        string m_SettingRoom; 
    
    private:
        string m_BedRoom;
};

// 类外写成员函数
Building::Building()
{
    m_SettingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    // 创建建筑物对象
    building = new Building;
}

void GoodGay::visit()
{
    cout << "好基友的全局函数 正在访问" << building->m_SettingRoom << endl;
    cout << "好基友的全局函数 正在访问" << building->m_BedRoom << endl;
}


void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();
    return 0;
}