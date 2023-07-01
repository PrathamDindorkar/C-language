#include<iostream>
#include<conio.h>
#include<math.h>     // <math.h> is used to calculate square root mathematical problem
using namespace std;
int main(){
float x1,y1;        // float is used so that one can also calculate sides in decimal forms
cout<<"Enter the value of vertice A(x1,y1):\n";
cin>>x1>>y1;         // here user can enter the value of x1 and x2 at same time
float x2,y2;
cout<<"Enter the value of vertice B(x2,y2):\n";
cin>>x2>>y2;      // user can enter the 2 value by typing first value then pressing enter and then second value
float x3,y3;
cout<<"Enter the value of vertice C(x3,y3):\n";
cin>>x3>>y3;
float x4,y4;
cout<<"Enter the value of vertice D(x4,y4):\n";
cin>>x4>>y4;

float s1,s2,s3,s4;
s1 =(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1); //Calculating sides by using distance formula
s2 =(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
s3 = sqrt(s1);        // second part of distance formula, taking square roots
s4 = sqrt(s2);       // square root can be calculated by sqrt()
// Note- s3 and s4 are optional and can be commented because the value in
// roots can also be equal and can be said as square if equal else rectangle
if (s3==s4){  // "==" is used to compare the value
cout<<"Figure is Square.\n"<<"Area of Square is: "<<s3*s4;
}
else{
cout<<"Figure is Rectangle.\n"<<"Area of rectangle is: "<<s3*s4;
}
return 0;
}