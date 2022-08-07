#include<iostream>
using namespace std;

// 空指针调用成员函数
class Person
{
    public:
        void showClassNum()
        {
            cout << "This is Person class" << endl;
        }

        void showPersonAge()
        {
            if (this == NULL)
            {
                return;
            }
            cout << "Age = " << this->m_Age << endl;  // 报错的原因是因为传入的指针为NULL 
        }
        int m_Age;
};

void test01()
{
    Person *p = NULL;

    p->showClassNum();   // right

    p->showPersonAge(); 

}

int main()
{
    test01();
    return 0;
}