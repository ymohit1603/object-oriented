#include<iostream>
using namespace std;

class A
{
    public:
        virtual void fun() = 0;
        int getx()
        {
            cout << "getx" << endl;
            ;
        }
};

class B:public A{
    public:
    void fun(){
            cout << "fun()"<<endl;
    }
};

int main()
{
    B obj;
    obj.fun();
    obj.getx();
    return 0;
}