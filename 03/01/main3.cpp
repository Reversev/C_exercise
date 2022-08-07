#include<iostream>
using namespace std;

// 利用函数模板封装一个排序函数 可以对不同数据类型数组进行排序
// 排序则从大到小 排序算法为选择排序
// 分别利用char数组和int数组进行测试

// 交换函数模板
template<typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// 排序算法
template<typename T>
void mySorted(T arr[], int len)
{
    for (int i=0; i<len; i++)
    {
        int max = i;  // 认定最大值的下标
        for (int j=i+1; j<len; j++)
        {
            // 如认定的最大值比遍历的数值要小 说明该值为目前最小
            if (arr[max] < arr[j])
            {
                max = j;    // 更新最大值下标
            }
        }
        if (max != i)
        {
            // 交换max和i下标的元素
            mySwap(arr[max], arr[i]);
        } 
    }
}

// 打印数组模板
template<typename T>
void printArr(T arr[], int len)
{
    for(int i =0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    // 测试char数组
    char charArr[] = "dabcfe";
    int len = 0;
    len = sizeof(charArr)/sizeof(char);
    mySorted(charArr, len);
    printArr(charArr, len);

    // 测试char数组
    int intArr[] = {1, 5, 8, 7, 9};
    int len1 = 0;
    len1 = sizeof(intArr)/sizeof(int);
    mySorted(intArr, len1);
    printArr(intArr, len1);
}

int main()
{
    test01();
    return 0;
}