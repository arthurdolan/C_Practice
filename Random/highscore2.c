#include <stdio.h>
#include <stdlib.h>

void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int main()
{
    
    int scores [10] = {0,0,0,0,0,0,0,0,0,0};
    int timesplayed = 0;

   
    while(timesplayed<10)
    {
        printf("What is your high score? -->\t");
        scanf("%d",&scores[timesplayed]);
        for(int t = 0; t<10; t++) 
        {
            while(scores[timesplayed]>scores[t])
            {
                
                int temp = scores[timesplayed];
                scores[timesplayed] = scores[t];
                scores[t] = temp;
                
            }
        }
        
        for(int i=0; i<10;i++)
        {
            printf("%d - %d\n", i+1, scores[i]);

        }
        printf("Highscore = %d \n", scores[0]);
        printf("Lowest score = ");
        timesplayed++;    
    }
       

}