#include<iostream>
using namespace std;
int main(){
   int x=1,y=2,z[10];
   int *ip;   
   ip =&x;      // ip points to x
   y = *ip;     // y is 1 because ip pointed to x and x is 1
   *ip =0;     // x is now 0
   ip= &z[0];    // ip now points to z[0]
   cout<<x<<endl<<y<<endl;
   y=*ip;
   *ip++;
   *ip=0;
   ip = &z[5];
   *ip =4;
   cout<<z[5];
return 0;
}