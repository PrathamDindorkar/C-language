#include<iostream>
#include<conio.h>
using namespace std;
int main(){
float lw,bw;  // lw is length of wall & bw is Breadth of wall
cout<<"Enter the length of wall: ";
cin>>lw;
cout<<"Enter the breadth of wall: ";
cin>>bw;
float lt1,bt1;  // lt1 is length of tile 1 & bt1 is bredth of tile 1
cout<<"Enter the length of Tile Type 1: ";
cin>>lt1;
cout<<"Enter the breadth of Tile Type 1: ";
cin>>bt1;
float lt2,bt2; // lt2 is length of tile 2 & bt2 is breadth of tile 2
cout<<"Enter the length of Tile Type 2: ";
cin>>lt2;
cout<<"Enter the breadth of Tile Type 2: ";
cin>>bt2;
float r1,r2;   // r1 is price of Tile type 1 & r2 is priceof Tile type 2
cout<<"Enter the Price of Tile Type 1: ";
cin>>r1;
cout<<"Enter the Price of Tile Type 2: ";
cin>>r2;
float at1,aw,at2; //aw is area of wall, at1 is area of tile 1 and at2 is area of tile 2
at1 = lt1*bt1;
at2 = lt2*bt2;
aw = lw*bw;
int i;
cout<<"Which type of tile you want to apply, Type 1 or Type 2: ";
cin>>i;
if(i==1){
float t1;
t1 = (aw/at1)*r1;
cout<<"The Total bill to tile up the wall is: "<<t1;
if(30000<t1<50000){
float dt1,total1;
dt1 = (t1*5)/100;
total1 = t1-dt1;
cout<<"\nAfter 5% discount your bill is: "<<total1;
}
else if(t1>50000){
float d1t1,total11;
d1t1 = (t1*10)/100;
total11 = t1-d1t1;
cout<<"\nAfter 10% discount your bill is: "<<total11;
}
}
if(i==2){
float t2;
t2 = (aw/at2)*r2;
if(30000<t2<50000){
cout<<"The Total bill to tile up the wall is: "<<t2;
float dt2,total2;
dt2 = (t2*5)/100;
total2 = t2-dt2;
cout<<"\nAfter 5% discount your bill is: "<<total2;
}
else if(t2>50000){
float d2t2,total22;
d2t2 = (t2*10)/100;
total22 = t2-d2t2;
cout<<"\nAfter 10% discount your bill is: "<<total22;
}
}
getch();
return 0;
}