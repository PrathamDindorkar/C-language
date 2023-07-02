#include<iostream>
using namespace std;
int main(){
  struct point {
      int x=7;
      int y;
     // cout<<"x in struct point is: "<<x;
  };
  int x=9;
  cout<<"x in main is: "<< x;
return 0;
}