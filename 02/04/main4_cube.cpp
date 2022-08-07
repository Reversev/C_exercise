#include<iostream>
using namespace std;

// 设计一个立方体类
// 求出立方体的面积和体积 分别用全局函数和成员函数判断两个立方体是否相等
class Cube
{
    public:
        // 设置长
        void setL(int l)
        {
            m_L = l;
        }
        // 获取长
        int getL()
        {
            return m_L;
        }

        // 设置宽
        void setW(int w)
        {
            m_W = w;
        }
        // 获取宽
        int getW()
        {
            return m_W;
        }

        // 设置高
        void setH(int h)
        {
            m_H = h;
        }
        // 获取高
        int getH()
        {
            return m_H;
        }
        
        // 计算立方体面积
        int calculatteS()
        {
            return 2*m_L*m_W + 2*m_H*m_W + 2*m_L*m_H;
        }

        // 计算立方体体积
        int calculatteV()
        {
            return m_L*m_W*m_H;
        }

        // 利用成员函数判断两个立方体是否相等
        bool isSameByClass(Cube &c)
        {
            if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
            {
                return true;
            }
            else {return false;} 
        }

    private:
        int m_L;
        int m_W;
        int m_H;

};

// 利用全局函数来判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    else {return false;} 
}

int main()
{
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << c1.calculatteS() << endl;  // erea
    cout << c1.calculatteV() << endl;  // volume

    // 创建第二个立方体
    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(12);

    bool ret = isSame(c1, c2);
    if (ret)
    {
        cout << "c1和c2是相等的" << endl;
    }
    else
    {
        cout << "c1和c2是不相等的" << endl;
    } 

    // 利用成员函数判断
    ret = c1.isSameByClass(c2);
    if (ret)
    {
        cout << "成员函数判断: c1和c2是相等的" << endl;
    }
    else
    {
        cout << "成员函数判断: c1和c2是不相等的" << endl;
    }

    return 0;
}