#include <stdio.h>
void swap(int* px, int* py)
{
    int temp = *px;
    int *px = *py;
    int *py = temp;
}
void print_array(){
    for(int i = 0; i<10; i++){
        printf("%d", numbers[i])
    }
}

int main()
{
    int numbers[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int k=0; k<10;k++){
        printf("Put your highscore in here");
        scanf("%d", &int numbers[k] )

        for(int t = 0; t<10; t++) 
        {
            while(numbers[k]>numbers[t])
            {
                swap(numbers[k], numbers[t]);
                
            }
        }
    printarray()
    }

    

}
