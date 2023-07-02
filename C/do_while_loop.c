# include<stdio.h>

int main(){
    int i=0;         // while loop first checks the condition and then executes the code
    do{             // do-while loop first executes the code and then checks the condition
        printf("The value of i is: %d", i);
        i++;
    }while(i<=4);
    return 0;
}