#include<iostream>
using namespace std;



class A
{
    int a = 5;
    public:
    void show()
    {
        cout << "Value of a:" << a << endl;
    }
    friend void exchange(A &, B &);
};



class B
{
    int b = 6;
    public:
    void show ()
    {
        cout << "Value of b:" << b << endl;
    }
    friend void exchange(A &, B &);
};


void exchange(A & x,B & y){
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}



int main()
{
    A obj1;
    B obj2;


    obj1.show();
    obj2.show();

    exchange(obj1, obj2);

    obj1.show();
    obj2.show();

    return 0;
}