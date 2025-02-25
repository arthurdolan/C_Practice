#include <stdio.h>

int main()
{
   
    int scores[10] = {0,0,0,0,0,0,0,0,0,0};
    int timesPlayed = 0;    
    while (timesPlayed < 10)
    {
        printf("Please enter your score?");
        scanf("%d", &scores[timesPlayed]);
       
        for (int i = 0;i < 10; i++)
        for(int t = 0; t<10; t++) 
        {
            while(scores[timesPlayed]>scores[t])
            {
                
                
                
            }
        }

        printf("%d - %d/n", i+1, scores[i]);


        }
    timesPlayed++;
        



    }
}