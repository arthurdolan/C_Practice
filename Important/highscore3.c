#include <stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x; 
 
    *x= *y;
    
    *y = temp;
}
void print_array(int numScores, int array[]){
    for(int i = 0; i<=numScores; i++){
        printf("%d - %d\n",i+1, array[i]);
    }
}

int main()
{
    int numbers[10] = {0,0,0,0,0,0,0,0,0,0};
    int timesPlayed=0;
    while(timesPlayed<9){
        printf("Put your highscore in here\n");
        scanf("%d", &numbers[timesPlayed]);
        
        for(int t = 0; t<10; t++) 
        {
            while(numbers[timesPlayed]>numbers[t])
            {

                swap(&numbers[timesPlayed], &numbers[t]);
                
            }
        }
        print_array(timesPlayed, numbers);
        timesPlayed++;
    }
    return 0;
    

}
