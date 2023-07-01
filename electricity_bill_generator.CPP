#include<iostream>
using namespace std;
int main(){

float bill,unit;
cout<<"Please Enter the Units Consumed ";
cin>>unit;
if(unit<=100){
bill = unit*0.5;
cout<<"Your bill is: "<<bill;
}
else if(unit>100 && unit<=200){
bill = ((unit*0.65)+50)-unit;
cout<<"Your bill is: "<<bill;
}
else if(unit>200 && unit<=300){
bill = ((unit*0.75)+115)-unit;
cout<<"Your bill is: "<<bill;
}
else if(unit>300 && unit<=500){
bill = ((unit*0.85)+190)-unit;
cout<<"Your bill is: "<<bill;
}

return 0;
}