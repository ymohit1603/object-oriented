#include<iostream>
using namespace std;


class A
{
    protected:
        int a;
        void get_a();
};


void A::get_a()
{
        
        cin >> a;
}

class B:private A{
    public:
        void display();
};

void B::display()
{
        void get_a();
        cout << "a=" << a;
}


int main()
{
        B obj1;
       
        obj1.display();

        return 0;
}