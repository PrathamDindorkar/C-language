#include<iostream>
using namespace std;
int main(){
int a[10];
int i, value;
for(i=0;i<10;i++)
{
    cout<<"Enter a value ";
    cin>>value;
    a[i]= value;
}
cout<<"The value entered are ";
for(i=0;i<10;i++){
    cout<<a[i]<<" ";
}
return 0;
}