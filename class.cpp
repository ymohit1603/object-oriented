#include<iostream>
using namespace std;

class A{

    public:
        void print();
};

void A::print(){
        cout << "Inside print function" << endl;
}

int main(){
        A obj;
        obj.print();
        cout << sizeof(obj);
        return 0;
}