#include <stdio.h>

int factorial(int *number)
{
    int factNumber = 1, varNumber = 0 ;
    varNumber = *number;
    if(varNumber>0){
        while(varNumber>0){
            factNumber *= varNumber;
            varNumber --;
        }
        printf("The factorial of %d is %d.\n", *number, factNumber);
        return 1;
    }
    else{
        printf("A negative number cannot be a factorial\n");
        return -1;
    }
}

int main(){
    int inputNumber;
    printf("Enter your number\n");
    scanf("%d", &inputNumber);
    factorial(&inputNumber);
}