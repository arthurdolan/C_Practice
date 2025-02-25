#include <stdio.h>

int stackArray[256];
int count = 0;


void push(int x)
{
    if(count == 256){
        fprintf(stderr,"There is no space in stack\n");
        return;
    }
    stackArray[count]=x;
    count++;
}
int pop()
{
    if(count == 0){
        fprintf(stderr,"Nothing to take from stack\n");
        return;
    }
    int result = stackArray[count-1];
    count--;
    return result;

}

int main()
{
    push(1);
    push(2);
    push(3);
    push(5);

    for(int i = 0; i<4; i++){
        printf("%d\n", pop());
    }

}