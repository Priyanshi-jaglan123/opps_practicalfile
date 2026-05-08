#include<iostream>
#include<cstring>
using namespace std;

class BankMgmt{
    float total_amt ;
    int account_no ;
    string name;
    BankMgmt(float a , int b , string c){
        total_amt = a;
        account_no = b;
        name = c;
    }
    void create(){
        cout<<"enter account number :";
        cin>>account_no;

        cout<<"enter name of candidate :";
        cin>>name;

        cout<<"enter amount present : ";
        cin>>total_amt;
    }
    float amt_afterInterest(int r , int t){ 
        for(int i=0; i<t ;i++ ){
            total_amt = total_amt +(1+r);
            }
        return total_amt;
    }
    int deposit(int a){
        cout<<"amount deposit : "<<a;
        total_amt += a;
        return total_amt;
    }
    int withdraw(int a){
        cout<<"amount withdraw : "<<a;
        total_amt -= a;
        return total_amt ;
    }
    void display(){
        cout<<"customer's data :\n "<<"account number = "<<account_no<<"\nname = "<<name<<"\ntotal amount = "<<total_amt<<endl;
    }
};

BankMgmt bb();
