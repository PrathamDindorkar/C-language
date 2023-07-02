# include<stdio.h>

int main(){
    printf("the value of 2*3-1*2 is: %d\n", 2*3-1*2);
    printf("the value of 2*3/1*2 is: %d\n", 2*3/1*2);  // this is wrong and this will give wrong answer
    printf("the value of (2*3)/(1*2) is: %d", (2*3)/(1*2)); // use associative property brakets and this is correct and will give you correct answer
    return 0;
}