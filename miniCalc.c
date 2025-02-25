#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int number)
{
    if(number<=1)
    {
        printf("%d is not a prime number.\n", number);
        return false;
    }
    int limit = sqrt(number);
    for(int i = 2 ;i<=limit; i++)
    {
        if(number%i == 0)
        {
            printf("%d is not prime number.\n", number);
            return false;
        }
    }
    printf("%d is a prime number.\n", number);
    return true;
}
int fibonacci(int n)
{
    int fibPrev = 1, fib2Prev = 0, fibNum = 0;
    for(int i = 0; i<=n-2; i++)
    {
        fibNum = (fibPrev + fib2Prev);
        fib2Prev = fibPrev;
        fibPrev = fibNum;
    }
    printf("The fibonacci sequence to the %dth term is %d\n",n,fibNum);
    return 1;
}
int factorial(int number)
{
    int factNumber = 1, varNumber = 0 ;
    varNumber = number;
    if(varNumber>0){
        while(varNumber>0){
            factNumber *= varNumber;
            varNumber --;
        }
        printf("The factorial of %d is %d.\n", number, factNumber);
        return 1;
    }
    else{
        printf("A negative number cannot be a factorial\n");
        return -1;
    }
}
int main()
{
    int choice = 0, num=0;
    printf("Type 1 for a Factorial calculation\n");
    printf("Type 2 for a Prime Number check\n");
    printf("Type 3 for a Fibonacci calculation\n");
    scanf("%d",&choice);
    printf("Enter a number\n");
    scanf("%d",&num);
    if(choice == 1)
    {
        factorial(num);
        return 0;
    }
    if(choice == 2)
    {
        isPrime(num);
        return 0;
    }
    if(choice == 3)
    {
        fibonacci(num);
        return 0;
    }
}
