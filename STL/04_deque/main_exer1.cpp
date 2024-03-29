#include<deque>
#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

// 案例 评委打分
/*
    有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分
*/
class Person
{
    public:
        Person(string name, int score)
        {
            this->m_Name = name;
            this->m_Score = score;
        }

        string m_Name;
        int m_Score;
};

void createPerson(vector<Person>& v)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        string name = "选手";
        name += nameSeed[i];
        int score = 0;

        Person p(name, score);

        // 将创建的person对象放到容器中
        v.push_back(p);
    }
}

void setScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        // 将评委的分数放入deque容器中
        deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = 60 + rand() % 41;   // 60-100
            d.push_back(score);
        }

        // cout << "Name: " << it->m_Name << " Score: " << it->m_Score << endl;
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
        {
            cout << (*it) << " ";
        }
        cout << endl;

        // sorted
        sort(d.begin(), d.end());
        // 去除最高分和最低分
        d.pop_back();
        d.pop_front();

        // 取平均分
        int sum = 0;
        for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
        {
            sum += *dit;  // 累加每个评委的分数
        }
        int avg = sum / d.size();
        // 将平均分赋值到对应的选手
        it->m_Score = avg;
    }
}

void showScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name: " << (*it).m_Name << " Score: " << (*it).m_Score << endl;
    }
}

void test01()
{
    // 随机种子
    srand((unsigned int)time(NULL));
    
    // 创建5名选手 
    vector<Person> v;
    createPerson(v);

    // 测试
    // for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << "Name: " << (*it).m_Name << " Score: " << (*it).m_Score << endl;
    // }

    // 给5名选手打分
    setScore(v);

    // 显示最后得分
    showScore(v);
}

int main()
{
    test01();
    return 0;
}