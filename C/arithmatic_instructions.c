# include<stdio.h>
# include<math.h>

int main(){
    int a=2;
    int b=3;
    int z;
//    a * b = z;  //Ilegal
   z = a * b;  //legal
    printf("the value of a+b is: %d\n", a+b);
    printf("the value of z is: %d\n", a*b);
    //printf("the value of 4 to the power of 5 is %d", 4^5); // will not be considered as power
    printf("the value of 4 to the power of 5 is %f\n", pow(4,5)); // this is the correct condition for exponential function but it is important to add math.h library
    printf("the remainder on dividing 4 by 3 is: %d\n", 4%3); // this % modular operator is used to get the value of remainder on dividing
    printf("the remainder on dividing -4 by 3 is: %d\n", -4%3); // this is legal
    // prinf("the remainder on dividing 4 by -3 is: %d", 4%-3);  //this is illegal, always put sign on numerator
    return 0;
}