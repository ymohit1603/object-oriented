#include<iostream>
using namespace std;


class A{
    int number;
    float cost;
    public:
        void getdata(int a, float b);
};

void A :: getdata(int a, float b){

        number = a;
        cost = b;


        cout << number<< endl;
        cout << cost << endl;

}




int main()
{
        A item;
        item.getdata(29, 80.5);
}