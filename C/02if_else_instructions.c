# include<stdio.h>

int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

if(age>45){
    printf("you are eligible for covid vaccine",age);
}
else{
    printf("you are not eligible for covid vaccine",age);
}
    return 0;
}