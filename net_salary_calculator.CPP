#include<iostream>
using namespace std;
int main(){

float bs;
cout<<"Enter Your Basic Salary: ";
cin>>bs;
float da,hra1,hra2,mi,ts1,i,ns1,ns2,ts2; // da for dearness allowance, bs for basic salary, hra1 house renting allowance for 16%, hra2 for house rent. all. for 8%
//mi for medical insurance, ts1 total spend 1, ts2 total spend 2, ns1 net salay 1,ns2 net salary 2
da = (bs*31)/100;
hra1 = (bs*16)/100;
hra2 = (bs*8)/100;
mi = (bs*3)/100;
cout<<"Do you live in Metro city or Non-Metro city.\n(select 1 for Metro city & 2 for Non-Metro city) ";
cin>>i;

if(i==1){
ts1 = da+hra1+mi;
ns1 = bs-ts1;
cout<<"Your Dearness Allowance is: "<<da;
cout<<"\nYour House Rent Allowance is: "<<hra1;
cout<<"\nYour Medical Insurance Premium is: "<<mi;
cout<<"\nYour Net Salary is: "<<ns1;
}
else if(i==2){
ts2 = da+hra2+mi;
ns2 = bs-ts2;
cout<<"Your Dearness Allowance is: "<<da;
cout<<"\nYour House Rent Allowance is: "<<hra2;
cout<<"\nYour Medical Insurance Premium is: "<<mi;
cout<<"\nYour Net Salary is: "<<ns2;
}
else{
cout<<"Value for selecting area is wrong.";
}

return 0;
}