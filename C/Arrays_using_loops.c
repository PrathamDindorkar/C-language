// YE bhot kaam kee chiz hai
# include<stdio.h>
int main(){
int marks[20];
for (int i = 0; i < 20; i++)
{
    printf("Enter the number %d\n", i+1);
    scanf("%d", &marks[i]);
}
for (int i = 0; i < 20; i++)
{
    printf("Enter the number %d\n: %d\n", i+1, marks[i]);
}

return 0;
}