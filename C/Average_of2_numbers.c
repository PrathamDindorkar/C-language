# include<stdio.h>
float average(float a, float b);
int main(){
    int a,b;
    printf("Enter the number %d\n");
    scanf("%d", &a);
    printf("Enter the number %d\n");
    scanf("%d", &b);
    printf("The average of number %d and %d is  %f\n", a, b, average(a,b));
    return 0;
}
float average(float a, float b){
    float c;
    c= (a+b)/2;
    return c;
}