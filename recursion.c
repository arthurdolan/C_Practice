#include <stdio.h>

int factorial(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}



int main()
{
    int num =5;
    printf("enter a number\n");
    //scanf("%d", &num);
    
    int result = factorial(num);
    printf("%d\n",result);
}