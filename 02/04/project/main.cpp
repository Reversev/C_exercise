#include<iostream>
#include "circle.h"
#include "point.h"
using namespace std;

// 判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
    // 计算两点之间距离的平方
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + 
                   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
                
    // 计算半径的平方
    int rDistance = c.getR() * c.getR();

    // 判断关系
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在园内" << endl;
    }
}

int main()
{
    // 创建圆
    Circle c1;
    c1.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c1.setCenter(center);

    // 创建点
    Point p;
    p.setX(10);
    p.setY(9);

    // 判断关系
    isInCircle(c1, p);

    return 0;
}