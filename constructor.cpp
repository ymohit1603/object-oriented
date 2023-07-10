#include<iostream>
using namespace std;

class A{
    public:
    A() {
        cout << "Inside Constructor";
    }
    A(int a,int b){
        cout << a + b << endl;
    }
};

int main()
{
    A obj;
    A obj(2,3);

}