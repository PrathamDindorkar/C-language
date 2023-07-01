#include<iostream>
#include<conio.h>
using namespace std;
int main(){
float d1,d2,f;
cout<<"Enter the Reading of odometer at the begining of the Journey.\n";
cin>>d1;
cout<<"Enter the Reading of odometer after the Journey.\n";
cin>>d2;
cout<<"How much fuel is required to fill up the tank.\n";
cin>>f;
float d3,m;
d3 = d2-d1;
m = d3/f;
cout<<"The Milage of your vehicle is: "<<m;
return 0;
}
