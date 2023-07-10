#include<iostream>
using namespace std;


class A
{
    public:
        A()
        {
            int arr[5] = {1, 2, 3, 4, 5};
            for (int i = 0; i < 5;i++){
                cout << arr[i] ;
            }
            cout << endl;
        }
};


int main()
{
    A *p=new A();
    return 0;
}