# include<stdio.h>
void change(int b);
int main(){
    int b=50;
    printf("The value of b before changing is %d\n", b);
    change(b);
    printf("The value of b after changing is %d\n", b);

    return 0;
}
void change(int b){
    int a;
    b= 100;
}