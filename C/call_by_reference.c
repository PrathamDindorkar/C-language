# include<stdio.h>
void wrongswap(int a, int b);
void swap(int *a,int *b);
int main(){
    int a=32, b=8;
    printf("The value of a and b before swap is %d and %d\n", a,b);
    //wrongswap(a,b);  //will not work due to call by value
    swap(&a,&b);     //will work due to call by reference
    printf("The value of a and b after swap is %d and %d\n", a,b);
return 0;
}
void wrongswap(int a,int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}