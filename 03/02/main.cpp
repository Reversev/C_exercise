#include<iostream>
#include<string>
using namespace std;

// 类模板
template<class NameType, class AgeType>
class Person
{
    public:
        Person(NameType name, AgeType age)
        {   
            this->m_name = name;
            this->m_age = age;
        }
        void showPerson()
        {
            cout << "name: " << m_name << endl;
            cout << "age: " << m_age << endl;
        }
        NameType m_name;
        AgeType m_age;
};

void test01()
{
    Person<string, int> p1("sunwukong", 99);   
    p1.showPerson();
}

int main()
{
    test01();
    return 0;
}