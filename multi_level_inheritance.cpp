#include<iostream>
using namespace std;



class A{
    public:
        int a=1;
        void display1();
};

class B:public A{
        public:
            int b=2;
            void display2();
};

class C:public B{
    public:
        int c=3;
        void display3();
};

void A::display1()
{
        cout << "a=" << a<<endl;
}

void B::display2()
{
        cout << "b=" << b << endl;
}

void C::display3()
{
        cout << "c=" << c << endl;
}

int main()
{
        C obj1;
        obj1.display1();
        obj1.display2();
        obj1.display3();


        return 0;
}