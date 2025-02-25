#include <stdio.h>

int factorial(int num)
{
    if(num >1)
    {
        
        return num * factorial(num-1);
    }
    return 1;
}



int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    
    int result = factorial(num);
    printf("%d\n",result);
}