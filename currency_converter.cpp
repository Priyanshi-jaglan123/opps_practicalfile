#include <iostream>
using namespace std;
int main()
{
    int choice;
    float amount;
    cout<<"1. INR to USD"<<endl;
    cout<<"2. USD to INR"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    cout<<"Enter amount: ";
    cin>>amount;
    switch(choice)
    {
        case 1:
        cout<<"USD: "<<amount/83<<endl;
        break;
        case 2:
        cout<<"INR: "<<amount*83<<endl;
        break;
                default:
        cout<<"Invalid Choice";
    }
    return 0 ;
}