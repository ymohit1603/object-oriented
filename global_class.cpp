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

    B obj1;
    obj1.sum();
    return 0;
}