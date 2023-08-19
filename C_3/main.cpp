#include <iostream>
using namespace std;

class MyClass 
{
public:
    MyClass() : m_data(0) {}
    virtual ~MyClass() {}
    virtual int add_int(int i) 
    { 
        cout << "i:" << i << endl;
        m_data = m_data + i;
        return m_data; 
    }
    void say_hello() {
        cout << "Hello, the number is: " << m_data << endl;
    }
    int m_data;
};

class Wrapper
{
public:
    std::string name;

    // 是否产生波形
    bool waveEnabled;
    //dut
    MyClass top;

    Wrapper(const char * name)
    {
        waveEnabled = true;
        this->name = name;
    }
    // 析构函数在对象消亡时即自动被调用
    virtual ~Wrapper()
    {
    }
};

void test()
{
    cout << "test()" << endl;
}

int main()
{
    test();
    return 0;
}