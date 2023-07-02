# include<stdio.h>
# include<stdlib.h>     // This liberary is used when you want to take a random number
# include<time.h>       // This liberary is taken when you use srand(time(0)); 
int main(){
    int number,i,attempts=1;
    srand(time(0));     // This is function used to take unique and different number everytime
    number = rand()%100 + 1;   // This will generate a random number between 1 to 100
//printf("The number is %d\n", number);
    do{
        printf("Guess the number that I've chosen ");
    scanf("%d", &i);
    if (i<number)
    {
        printf("Think higher number\n");
    }
    else if (i>number)
    {
        printf("Think smaller number\n");
    }
    else if (i==number)
    {
        printf("Hurray!! Your guess is correct\nThe number is %d\nYou guessed it in %d attempts", number,attempts);
    }
    attempts++;
    }while(i!=number);
    
    return 0;
}