#include<iostream>
using namespace std;

class A{
    public:
    void show()
    {
        cout << "class A";
    }
};

class B:public A{
    public:
    void show()
    {
        cout << "calss B";
    }
};

class C:public A {
    public:
    void show()
    {
        cout << "class C";
    }
};

class D:public B,public C{
    public:
    void show()
    {
        cout << "class D";
    }
};


int main()
{
    C c;
    
}