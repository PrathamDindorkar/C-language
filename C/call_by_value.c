# include<stdio.h>
int sum(int a, int b);
int main(){
    int a=89,b=1;
    printf("The value of a+b is %d\n", sum(a,b));
return 0;
}
int sum (int a,int b){
    int c;
    c=a+b;
    return c;
}