# include<stdio.h>

int main(){
    int n;
    do{
        printf("The number is \n");
        scanf("%d", &n);
        if(n==10){
            break;
        }
        n++;
        printf("The number is %d\n", n);
    }while(n<100);
    return 0;
}