#include<iostream>
using namespace std;


class A
{
    public:
    int a=4, b=5,sum1;
  
    void sum();
};


void A::sum()
{
        sum1 = a + b;
        cout << sum1 << endl;
}

class B:public A{

public:
    int result;
    void multiply();
};

void B::multiply()
{
    result = a * b;
    cout << result;
}




int main()
{
    A obj1;
    B obj2;

    
    obj1.sum();
    
    obj2.sum();
    obj2.multiply();
    return 0;
}