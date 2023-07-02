# include<stdio.h>

int main(){
    int a = 11;
    while(a>10){ // ----> These two lines will give an infinite number of results
        printf("The value of a is: %d\n", a);
        a++;
    }
    return 0;
}