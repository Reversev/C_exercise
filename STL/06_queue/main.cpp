#include<queue>
#include<iostream>
using namespace std;

// 队列queue容器
class Person
{
    public:
        Person(string name, int age)
        {
            this->m_name = name;
            this->m_age = age;
        }
        string m_name;
        int m_age;
};
void test01()
{
    // 创建队列
    queue<Person> q;

    // 准备数据
    Person p1("tangsen", 20);
    Person p2("sunwukong", 999);
    Person p3("zhubajie", 888);
    Person p4("shasen", 300);

    // 入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    cout << "the size of queue is " << q.size() << endl;
    
    // 判断只要队列不为空 查看对头 查看队尾 出队
    while(!q.empty())
    {
        // 查看队头
        cout << "first -- Name: " << q.front().m_name << "Age: " << q.front().m_age << endl;

        // 查看队尾
        cout << "last -- Name: " << q.back().m_name << "Age: " << q.back().m_age << endl;

        // 出队
        q.pop();
    }
    cout << "the size of queue is " << q.size() << endl;
}

int main()
{
    test01();
    return 0;
}