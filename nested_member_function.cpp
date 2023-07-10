#include<iostream>
using namespace std;

void printdata()
{
         {
                cout << a << endl;
                cout << b << endl;
        }
}

class A
{

    public:
        void getdata();
       
};

void A::getdata()
{
        
        int a, b;
        cin >> a;
        cin >> b;
        void printdata(){
                
                cout << a << endl;
                cout << b << endl;
        
        }

        
       
        
}

int main()
{
        A item;
        
        item.getdata();
      
        return 0;
}