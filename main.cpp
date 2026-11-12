#include<iostream>
using namespace std;
class Bank
{
public:
    double balance, withdraw, add;
    Bank()
    {
        balance=1000;
        withdraw=0;
        add=0;
    }
    void withdrw()
    {
        cout<<"Enter Amount to withdraw:";
        cin>>withdraw;
        if(balance<withdraw)
        {
            cout<<"Insufficient Balance"<<endl;
        }
        else
        {
            balance=balance-withdraw;
            cout<<"Your current remaining balance is:"<<balance;
            cout <<"\n Thank You!"<<endl;
        }
    }
    void depo()
    {
        cout<<"Enter the Amount to deposit:";
        cin>>add;
        balance=balance+add;
        cout<<"Your Updated balance is:"<<balance;
        cout<<"\n Thank You!"<<endl;
    }
    void checkBalance()
    {
        cout<<"Your Current Balance is:"<<balance;
        cout<<"\n Thank You!"<<endl;
    }
};
int main()
{
    int choice;
    Bank b1;
    do{
        cout<<"\n ********** Welcome Please Select One **********"<<endl;
        cout<<"\n1.Withdraw\n2.Deposit\n3.Check Balance"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: b1.withdrw();
            break;
            case 2: b1.depo();
            break;
            case 3: b1.checkBalance();
            break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    while(1);
return 0;
}
