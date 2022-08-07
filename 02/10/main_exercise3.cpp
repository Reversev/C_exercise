#include<iostream>
using namespace std;

// 多态案例3 电脑组装
// 抽象CPU类
class CPU
{
    public:
        // 抽象计算函数
        virtual void calculate() = 0;

};
// 抽象显卡类
class VideoCar
{
    public:
        // 抽象显示函数
        virtual void display() = 0;
};

// 抽象内存条类
class Memory
{
    public:
        // 抽象存储函数
        virtual void storage() = 0;
};

// 电脑类
class Computer
{
    public:
        Computer(CPU *cpu, VideoCar *vc, Memory *mem)
        {
            m_cpu = cpu;
            m_vc = vc;
            m_mem = mem;
        }
        // 提供工作函数
        void work()
        {
            // 让零件工作起来 调用接口
            m_cpu->calculate();
            m_vc->display();
            m_mem->storage();
        }

        // 提供一个析构函数 释放3个电脑零件
        ~Computer()
        {
            // 释放CPU零件
            if (m_cpu != NULL)
            {
                delete m_cpu;
                m_cpu = NULL;
            }
            // 释放显卡零件
            if (m_vc != NULL)
            {
                delete m_vc;
                m_vc = NULL;
            }
            // 释放内存条零件
            if (m_mem != NULL)
            {
                delete m_mem;
                m_mem = NULL;
            }
        }
    private:
        CPU *m_cpu;
        VideoCar *m_vc;
        Memory *m_mem;
};


// 具体的厂商
// Inter厂商
class IntelCPU: public CPU
{
    public:
        virtual void calculate()
        {
            cout << "Intel的CPU开始计算了!" << endl;
        }
};
class IntelVideoCar: public VideoCar
{
    public:
        virtual void display()
        {
            cout << "Intel的显卡开始显示了!" << endl;
        }
};
class IntelMemory: public Memory
{
    public:
        virtual void storage()
        {
            cout << "Intel的内存条开始存储了!" << endl;
        }
};

// Lenovo厂商
class LenovoCPU: public CPU
{
    public:
        virtual void calculate()
        {
            cout << "Lenovo的CPU开始计算了!" << endl;
        }
};
class LenovoVideoCar: public VideoCar
{
    public:
        virtual void display()
        {
            cout << "Lenovo的显卡开始显示了!" << endl;
        }
};
class LenovoMemory: public Memory
{
    public:
        virtual void storage()
        {
            cout << "Lenovo的内存条开始存储了!" << endl;
        }
};

void test01()
{
    CPU *intelCPU = new IntelCPU ;
    VideoCar *intelVideoCar = new IntelVideoCar;
    Memory *intelMemory = new IntelMemory;

    Computer *computer1 = new Computer(intelCPU, intelVideoCar, intelMemory);
    computer1->work();
    delete computer1;
    cout << "---------------1---------------" << endl;

    Computer *computer2 = new Computer(new LenovoCPU, new LenovoVideoCar, new LenovoMemory);
    computer2->work();
    delete computer2;
    cout << "---------------2---------------" << endl;
}

int main()
{
    test01();
    return 0;
}