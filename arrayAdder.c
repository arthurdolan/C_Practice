#include <stdio.h>
int calc_total(int numbers[], int arrayLength)
{
    int total = 0;
    for(int i = 0; i<arrayLength; i++)
        {
            total += numbers[i];
        }
    return total;
}
int main(){
    int array[8] = {9,4,2,6,7,5,3,2};
    int length = 8;
    int total = calc_total(array,length);
    printf("total = %d", total);
}
