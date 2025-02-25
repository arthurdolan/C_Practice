#include <stdio.h>

int calc_total(int numbers[], int arrayLength)
{
   // note: numbers is an integer array of arrayLength elements
    int sum = 0; 
    int i=0;
    for(;i<arrayLength;i++)
        sum += numbers[i];
    

    return sum;
}

int main(){
    int score[5]={3,2,5,1,5};
    calc_total(score,5);
}