# include<stdio.h>

int main(){
    int i=10;
    printf("The value of i is: %d\n", i++);   // i++ is used for printing first and then do increment
    printf("The value of i after i++ is: %d\n", i);
    // Now the real value of i is 11 as above the 10 is incremented and has became 11
    printf("The value of i is: %d\n", ++i);   //++i is used for first incrementing and then printing the value
    printf("The value of i is: %d\n", i);      
    return 0;
}