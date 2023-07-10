#include <iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        std::cout << "This is show function inside base class"<<endl;

    }
};

class B:public A{
    public:
    void display()
    {
        std::cout << "This is show function inside class B"<<endl;
    }
     void show()
    {
        cout <<"This is show function inside class B"<<endl;
    }
};

class C:public A{
    public:
    void print()
    {
        std::cout << "THis is a print function inside class C"<<endl;
    }
     void show()
    {
        cout << "THis is a SHOW function inside class C"<<endl;
    }
}
;


class D:public B,public C{
    public:
    void post()
    {
        std::cout << "this is a post function inside class D"<<endl;
    }
     void show()
    {
        cout << "THis is a show function inside class C"<<endl;
    }
};


int main()
{
    // A obj;
    // A *ptr= &obj;
    // ptr->show();
    D obj1;
    // obj1.post();
    // obj1.print();
    obj1.display();
    // obj1.show();
    return 0;
}