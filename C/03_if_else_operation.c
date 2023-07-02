# include<stdio.h>

int main(){
     int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

if(age>=18 && age<90){
    printf("you are eligible for voting",age);
}
else{
    printf("you are not eligible for voting",age);
}
    return 0;
}