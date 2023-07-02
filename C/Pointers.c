// Pointer is the variable which stores address of another variable
// pointer ko batane ke liye %u use hota hai
# include<stdio.h>
int main(){
   int i=34;
   int *k= &i;
   printf("The value of i is %d\n", i);
   printf("The value of i is %d\n", *k);
   printf("The value of j is %u\n", &i);
   printf("The value of j is %u\n", &k);
   printf("The value of j is %u\n", *(&k));
}