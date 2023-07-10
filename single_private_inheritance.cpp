#include<iostream>
using namespace std;


class A
{
    public:
        int a;
        void display_a();
};


void A :: display_a()
{
        cout << "a=" << a;
}
class B:private A
{
    public:
        void sum();
};




int main()
{
        B obj1;
  
        obj1.display_a();
        return 0;
}