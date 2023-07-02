# include<stdio.h>
float average(int a, int b, int c);
int main(){
    int a,b,c;
    printf("Enter the value of a %d\n");
    scanf("%d", &a);
    printf("Enter the value of b %d\n");
    scanf("%d", &b);
    printf("Enter the value of c %d\n");
    scanf("%d", &c);
    printf("The value of average is %f\n", average(a,b,c));
    return 0;
}
float average(int a, int b, int c){
    float d;
    d= (a+b+c)/3;
    return d;
}