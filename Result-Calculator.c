# include<stdio.h>
int main(){
    int input;
    printf("What subject have you opted?\nSelect 3 for Science and 5 for Commerce ");
    scanf("%d", &input);
    if(input==3){
        int maths,physics,chemistry;
        printf("Marks obtained in Maths \n");
        scanf("%d", &maths);
        printf("Marks obtained in physics \n");
        scanf("%d", &physics);
        printf("Marks obtained in chemistry \n");
        scanf("%d", &chemistry);
        int total=maths+physics+chemistry;
        float S_result=(total*100)/300;
        printf("Your Result for Science 3 subjects is %f\n", S_result);
    }
    else if (input==5)
    {   int accounts,BS,economics;
        printf("Marks obtained in accounts \n");
        scanf("%d", &accounts);
        printf("Marks obtained in BS \n");
        scanf("%d", &BS);
        printf("Marks obtained in economics \n");
        scanf("%d", &economics);
        int totalc=economics+BS+accounts;
        float C_result=(totalc*100)/300;
        printf("Your Result for Commerce 3 subjects is %f\n", C_result);
    }
    else{
        printf("Invalid Selection\nPlease select a valid option");
    }
    return 0;
}