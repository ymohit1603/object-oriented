#include<iostream>
using namespace std;



class A{
    int a = 4, b = 5;
    public:
    void print()
    {
        cout << a << endl;
        cout << b << endl;
    }
    class B
    {
        int a = 5, b = 6;
        public:
        void print1()
        {
            cout << a <<endl;
            cout << b << endl;

        }
    };
   
};



int main()
{
    A obj1;
    A::B obj;
    obj1.print();
    obj.print1();

    return 0;
}