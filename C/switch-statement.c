# include<stdio.h>

int main(){
    int gow;
    printf("Which part is your favourite in gow sequel from (1-4)\n");
    scanf("%d", &gow);
    switch(gow){           // switch multiple choices jaisa hai aam language mein
        case 1: 
        printf("God of War 1\n");
        break;   //break is important, if not put then compiler will give all strings after what is entered
        case 2:
        printf("God of War 2\n");
        break;
        case 3:
        printf("God of War 3\n");
        break;
        case 4:
        printf("God of War 4\n");
        break;
        default:
        printf("Invalid Choice");
        break;
    }

    return 0;
}