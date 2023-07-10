#include<iostream>
using namespace std;



class items
{
    int itemcode[50];
    int itemprice[50];
    int count;
    public:
        void CNT(){
            count = 0;
        };
        void getitems();
        void displaysum();
        void remove();
        void displayitems();
};

void items :: getitems()
{

        cout << "Enter item code"<<endl ;
        cin >>  itemcode[count] ;
        cout<<"Enter item price"<<endl;
        cin >> itemprice[count];
        count++;       
}

void items::displaysum()
{
        float sum=0;
        for (int i = 0; i < count;i++)
        {
            sum += itemprice[i];
        }
        cout << "Total:" << sum << endl;
}

void items::remove()
{
        int a;
        cout << "Enter item code:" << endl;
        cin>>a;
        for (int i = 0; i < count;i++)
        {
            if(a==itemcode[i])
            {
                itemcode[i] = 0;
                itemprice[i] = 0;
            }
        }
        
}

void items :: displayitems()
{
        cout << "\nCode : Price\n";
        for (int i = 0; i < count;i++)
        {
            cout << itemcode[i]<<" : ";
            cout << itemprice[i] << endl;
        }
        cout << "\n";
}


int main()
{
        int x;
        items A;
        A.CNT();

        do
        {
        cout << "\n1.Add an item";
        cout << "\n2.Display total value";
        cout << "\n3.Delete an item";
        cout << "\n4.Display all items";
        cout << "\n5.Quit";
        cout << "\nWhat's your option: ";
        cin >> x;

        switch(x)
        {
            case 1:
                A.getitems();
                break;
            case 2:
                A.displaysum();
                break;
            case 3:
                A.remove();
                break;
            case 4:
                A.displayitems();
                break;
            case 5:
                break;
            default:
                cout << " Error!! Enter correct option";
        }

            
        } while (x!=5);

        return 0;
}