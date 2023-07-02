#include <stdio.h>

int main()
{
    int a;
    scanf("%d\n", &a);
    while (a < 20)   // This is the loop instructions which are used to print data multiple times efficiently 
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}