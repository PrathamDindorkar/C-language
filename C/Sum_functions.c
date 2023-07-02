# include<stdio.h>
// sum is the function which carry int as input and gives integer as an output
int sum(int a, int b);  // function prototype
int main(){
    int c;
    c = sum(2,10);   // function call
    printf("The sum of a and b is: %d\n", c);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}