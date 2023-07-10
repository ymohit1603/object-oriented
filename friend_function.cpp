#include<iostream>
using namespace std;

class A
{
        int a=4;
        int b=5 ;
        

public:
        void setvalue(){
              
        }
        friend void show(A);

};


void show(A obj)
{
       cout<< obj.a;
       cout<< obj.b;
}


int main()
{
        A obj;
        obj.setvalue();
        show(obj);
}