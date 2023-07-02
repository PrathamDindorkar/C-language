# include<stdio.h>
# include<math.h>

int main()
{
    int a,b;
    
    printf("Enter the number:\n");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("%d is even number\n", a);
    }
    else
    {
        printf("%d is odd number\n", a);
    }
    return 0;
}      