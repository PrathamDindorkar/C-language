#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
int vowela=0,vowelb=0;
char str1[100], str2[100];
cout<<"Enter the string 1: "<<endl;
cin.getline(str1,100);
cout<<"Enter the string 2: "<<endl;
cin.getline(str2,100);
for(int i=0;i<strlen(str1);i++){
    if(str1[i]=='A' || str1[i]=='a' || str1[i]=='E' || str1[i]=='e' || str1[i]=='I' || str1[i]=='i' || str1[i]=='O' || str1[i]=='o' || str1[i]=='U' || str1[i]=='u'){
        vowela++;
    }
}
for(int i=0;i<strlen(str2);i++){
    if(str2[i]=='A' || str2[i]=='a' || str2[i]=='E' || str2[i]=='e' || str2[i]=='I' || str2[i]=='i' || str2[i]=='O' || str2[i]=='o' || str2[i]=='U' || str2[i]=='u'){
        vowelb++;
    }
}
if(vowela>vowelb){
    cout<<"String 1 has more vowels: "<<endl<<str1<<endl;
}
else if(vowela<vowelb){
    cout<<"String 2 has more vowels: "<<endl<<str2<<endl;
}
else{
    cout<<"Both has equal number of vowels.";
}
return 0;
}