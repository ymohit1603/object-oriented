#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class customer_details{
    public:
        string name, address;
        int contact;
        char departure[25];
        char arrival[25];
        char date[10];
        void details(){
        cout << "Enter Nour Name:";
        cin >> name;
        cout << "Enter Your Address:";
        cin >> address;
        cout << "Enter Contact Number";
        cin >> contact;
        }


        void book()
        {

        int n;
        int k = 0;
        do{

            cout<<"Select your city of Departure";
            cout << "----------------------------\n";
            cout << "\t1. Goa\n";
            cout << "\t1. Amritsar\n";
            cout << "\t1. Bengalure\n";
            cout << "\t1. New Delhi\n";
            cout << "\t1. Mumbai\n";
            cout << "\t1. Chandigarh\n";
            cout << "\t1. Patna\n";

            cout << "Please Input Your CHoice:-";
           
            cin >> n;
            switch(n){
                case 1:
                    strcpy(departure, "Goa");
                    break;
                case 2:
                    strcpy(departure, "Amritsar");
                    break;
                case 3:
                    strcpy(departure, "Bengaluru");
                    break;
                case 4:
                    strcpy(departure, "New Delhi");
                    break;
                case 5:
                    strcpy(departure, "Mumbai");
                    break;
                case 6:
                    strcpy(departure, "Chandigarh");
                    break;
                case 7:
                    strcpy(departure, "Patna");
                    break;
                default:
                    cout << "Invalid Choice . Please Try Again";
                    k++;
                        }
        } while (k != 0);

        int p = 0;
        do{
                        cout << "\n\tSelect your city of arrival\n";
                        cout << "\t\t------------------------------\n";
                        cout << "\t1.New Delhi\n";
                        cout << "\t2.Patna\n";
                        cout << "\t3.Mumbai\n";
                        cout << "\t4.Bengaluru\n";
                        cout << "\t5.Goa\n";
                        cout << "\t6.Chanandigarh\n";
                        cout << "\t7.Amritsar\n";

                        cout << "Please Input Your Choice:-";
                        cin >> n;

                        switch(n)
                        {
                            case 1:
                                strcpy(arrival, "New Delhi");
                            case 2:
                                strcpy(arrival, "Patna");
                            case 3:
                                strcpy(arrival, "Mumbai");
                            case 4:
                                strcpy(arrival, "Bengaluru");
                            case 5:
                                strcpy(arrival, "Chandigarh");
                            case 6:
                                strcpy(arrival, "AMritsar");
                            case 7:
                                strcpy(arrival, "Goa");
                            default:
                                cout << "Invalid choice . Please Try Again\n";
                                p++;
                        }
        } while (p != 0);

        cout << "Date of Journey(DD//MM//YYYY)";
        cin >> date;
        }
};


class FLIGHTS
{
        char flight_number[10];
        char flight_carrier[20];
        char time_depart[10];
        char time_arrival[10];

    public:
      int flightinfo()
      {
        cout << "Enter the Flight Number:-";
        cin >> flight_number;

        cout << "Enter the Flight Carrier Name:-";
        cin >> flight_carrier;

        cout << "ENter the departure time:-";
        cin >> time_depart;

        cout << "Enter the arrival time:-";
        cin >> time_arrival;
      }
};



int main()
{
      cout << "*********************************************************\n";
      cout << "--------Welcome to the Phenomenal Airline Services-------\n";
      cout << "***********************************************************\n";
      int k = 0;
      int choice;
      do{
        cout << "\t1. Enter your choice\n";
        cout << "---------------------------------------------------------\n";
        cout << "\t1.Booking\t\t2.Flight Detains\n";
        cout << "\t3.Search\t\t4.Modify\n";
        cout << "\t5.Cancellation\t\t6.Passanger Details\n";

        cout << "Please Enter your Preferred Choice:-";
        cin >> choice;
        if(choice<1||choice>6)
        {
                        cout << "\nInvalid Choice . Please Try Again.\n";
                        k++;

        }
      } while (k != 0);
}
