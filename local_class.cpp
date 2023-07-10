#include<iostream>
using namespace std;



class B
{
    int a = 5, b = 10;
    public:
    void sum()
    {
        int addition = a + b;
        cout << addition;
    }
};

int main(){

    class A
    {
        int a = 4, b = 6;
        public:
        void sum()
        {
            int addition = a + b;
            cout << addition<<endl;
        }
    };
    A obj;
    obj.sum();
    B obj1;
    obj1.sum();
    return 0;
}