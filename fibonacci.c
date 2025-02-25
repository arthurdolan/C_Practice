#include <stdio.h>

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
    
int main()
{
    int n;
    printf("Enter to what Nth term you would like the fibonacci sequence to go to\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
    
