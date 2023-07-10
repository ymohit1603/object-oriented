#include<iostream>
using namespace std;

int main()
{

int i ;

cin >> i;  // what if someone enters zero?

try {
    i = 5/i;
    if(i==0)
    {
        throw i;
    }

}
catch (int e) {

    cout << "divide by 0 error";
}
}
