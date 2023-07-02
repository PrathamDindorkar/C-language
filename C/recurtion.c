// program to calculate factorial by using recursion 
# include<stdio.h>

int main(){
    int a =5;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
int factorial(int x){     // this is recursion- the function which calls itself
    if (x==1|| x==0)
    {
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
    
}