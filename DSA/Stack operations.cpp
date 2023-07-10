#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> first;
int input,popnum;
int number,pushnum;
while(input!=4){
    cout<<"Enter Your Choice:\n1) Push\n2) Pop\n3) Display Stack\n4) Exit"<<endl;
    cin>>input;
    if(input == 1){
        cout<<"How many numbers do you want to Push: "<<endl;
       cin>>pushnum;
       for(int i=0;i<pushnum;i++){
           cout<<"Enter the number you want to Push: "<<endl;
           cin>>number;
           first.push(number);
       }
    }
    if(input == 2){
        cout<<"How many numbers do you want to Pop: "<<endl;
        cin>>popnum;
        for(int j=0;j<popnum;j++){
            first.pop();
        }
    }
    if(input == 3){
        while(!first.empty()){
            cout<<"Stack-->"<<endl<<first.top()<<endl;
            first.pop();
        }
    }
    if(input == 4){
        cout<<"Exiting"<<endl;
    }
}
return 0;
}