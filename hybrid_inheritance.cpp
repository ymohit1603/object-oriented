#include<iostream>
using namespace std;



class Parent{
    public:
        void display();
};

void Parent::display()
{
        cout << "!!";
}

class A:public Parent
{
    public:
        void display_1();
};

void A::display_1()
{
        cout << "hello";
}

class B:public Parent{
    public:
        void display_2();

};

void B::display_2()
{
        cout << "world";
}

class C:public B, public A{
    public:
        void display_3();
};

void C::display_3(){
        cout << "!!";
}

int main()
{
        C obj;
        Parent obj1;
        obj1.display();
        obj.display_1();
        obj.display_2();
        obj.display_3();
}