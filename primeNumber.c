#include <stdio.h>
#include <stdbool.h>

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


int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    isPrime(num);
    return 0;
}
