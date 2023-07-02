# include<stdio.h>

int main(){
     int num;
    printf("Enter your num:\n");
    scanf("%d", &num);

if(num==10){
    printf("it's 10, so you are ok!",num);
}
else if(num==20){
    printf("it's 20, so you are ok!",num);
}
else if(num==100){
    printf("so you are ok!",num);
}
else if(num<10){
    printf("you are not ok!",num);
}
else{
    printf("OMG! you are exceptional",num);
}
    return 0;
}