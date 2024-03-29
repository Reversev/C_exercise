#include<map>
#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
#define CHEHUA 0
#define MEISHU 1
#define YANFA 2

// 员工案例
/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/
class Worker
{
    public:
        string m_name;
        int m_salary;
};

void createWorkers(vector<Worker> &v)
{
    string nameseed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Worker worker;
        worker.m_name = "员工";
        worker.m_name += nameseed[i];

        worker.m_salary = rand() % 10000 + 10000; // 10000 - 19999 
        // 将员工放入容器中
        v.push_back(worker);
    }
}

// 员工分组
void setGroup(vector<Worker>&v, multimap<int, Worker> &m)
{
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        // 产生随机部门编号
        int deptId = rand() % 3;  // 0 1 2

        // 将员工插入到分组中
        // key部门编号 value具体员工
        m.insert(make_pair(deptId, *it));
    }
}

void showWorkerByGroup(multimap<int, Worker> &m)
{
    cout << "策划部门: " << endl;
    multimap<int, Worker>::iterator pos = m.find(CHEHUA);
    int count = m.count(CHEHUA);   // 统计具体人数
    int index = 0;
    for (;pos != m.end() && index < count; pos++, index++)
    {
        cout << "name: " << pos->second.m_name << " salary: " << pos->second.m_salary << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << "美术部门: " << endl;
    pos = m.find(MEISHU);
    count = m.count(MEISHU);   // 统计具体人数
    index = 0;
    for (;pos != m.end() && index < count; pos++, index++)
    {
        cout << "name: " << pos->second.m_name << " salary: " << pos->second.m_salary << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << "研发部门: " << endl;
    pos = m.find(YANFA);
    count = m.count(YANFA);   // 统计具体人数
    index = 0;
    for (;pos != m.end() && index < count; pos++, index++)
    {
        cout << "name: " << pos->second.m_name << " salary: " << pos->second.m_salary << endl;
    }
}

int main()
{
    srand((unsigned int) time (NULL));

    // 1 创建员工
    vector<Worker> vWorker;
    createWorkers(vWorker);

    // 2 员工分组
    multimap<int, Worker> mWorker;
    setGroup(vWorker, mWorker);

    // 3 分组显示员工
    showWorkerByGroup(mWorker);

    return 0;;
}