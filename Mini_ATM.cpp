#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class bank{
    public:
    char name[50];
    int acc;
    char type[20];
    float balance;
}b1;
int main(){
    int bal,withdraw,i,deposit;
        cout<<"Enter the Name of Account holder: "<<endl;
        cin>>b1.name;
        cout<<"Enter the Account number: "<<endl;
        cin>>b1.acc;
        cout<<"Enter the Account type: "<<endl;
        cin>>b1.type;
        cout<<"Enter the current balance: "<<endl;
        cin>>b1.balance;
        bal = b1.balance;
        for(int j=0;j<5;j++){
        cout<<"\nEnter your Choice\n1. Withdraw\n2. Deposit\n3. Show Balance"<<endl;
        cin>>i;
        if(i == 1){
            cout<<"How much money do you want to withdaraw: "<<endl;
            cin>>withdraw;
            if(withdraw>=b1.balance){
                cout<<"Not Enough Balance!"<<endl;
            }
            bal-=withdraw;
            cout<<"Remaining Balance: "<<bal;
        }
        else if(i == 2){
            cout<<"Enter the amount you want to Deposit: "<<endl;
            cin>>deposit;
            bal+=deposit;
            cout<<"Current Balance is: "<<bal;
        }
        else if(i == 3){
            cout<<"Your Account Information is: "<<endl;
            cout<<"Account Holder Name: "<<endl<<b1.name;
            cout<<"\nAccount Number is: "<<endl<<b1.acc;
            cout<<"\nAccount Type: "<<endl<<b1.type;
            cout<<"\nAccount Balance: "<<endl<<bal;
        }
        else{
            cout<<"Invalid Entry!"<<endl;
        }
        }
        cout<<"\nConnection timed out!\n";
return 0;
}