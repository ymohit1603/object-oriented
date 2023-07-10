#include<iostream>
using namespace std;



class A
{
    public:
        int a = 1;
        void display_a();
};

void A::display_a(){
        cout << "a=" << a << endl;
}
class C{
    public:
        int c = 3;
        void display_c();
};

class B:public A,public C{
    public:
        int b = 2;
        void display_b();
};

void B::display_b()
{
    cout << "b=" << b<< endl;
}


void C::display_c()
{
    cout << "c=" << c << endl;
}

int main()
{
        B obj1;
        obj1.display_a();
        obj1.display_c();
        return 0;
}
