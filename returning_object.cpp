#include<iostream>
using namespace std;


class A
{
    int m[3][3];
    public:
    void read()
    {
        for (int i = 0; i < 3;i++)
        {
            for (int j = 0; j < 3;j++)
            {
                cin >> m[i][j];
            }
        }
    }
    void show()
    {
        for (int i = 0; i < 3;i++)
        {
            for (int j = 0; j < 3;j++)
            {
                cout << m[i][j];
            }
                cout << endl;
        }
    }

    friend A transpose(A);
};




A transpose(A m1)
{
    A m2;
    for (int i = 0; i < 3;i++)
        {
            for (int j = 0; j < 3;j++)
            {
            m2.m[i][j] = m1.m[j][i];
            }
        }

        return m2;
}



int main()
{
        A obj1,obj2;
        obj1.read();
        obj1.show();

        obj2 = transpose(obj1);
        obj2.show();
}