#include <stdio.h>
#define maxSize 15
//define stack structure (using typedef means we dont have to explain its a struct each time)

struct structure {
    int array[maxSize];
    int top; //index for the top element
};


// Function to check if the stack is empty
//Stack is saying use the top Stack and use the name of *stack from int main
int isEmpty(struct structure *stack){
    if(stack -> top == -1){
        return 1;//The stack is empty
    }
    else
    {
        return 0; // stack isnt empty
    }
}

int isFull(struct structure *stack){
    if(stack -> top == maxSize){
        return 1;//The stack is full
    }
    else
    {
        return 0; // stack isnt full
    }
}
// Function to push an element onto the stack
void push(struct structure *stack, int value){
    if(isFull(stack)){
        printf("The stack is full\n");
        return; //leave function early if full
    }
    
    stack -> array[++stack -> top] = value; 
    //The ++ is infront of the stack because it needs a new top value 
    
}

int pop(struct structure *stack){
    if(isEmpty(stack)){
        printf("The stack is empty\n");
        return -1; //leave function early if full and return anything 
    }

    return stack -> array[stack -> top--]; 
}

int getTop(struct structure *stack){
    if(isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack -> array[stack -> top];
}
int printStack(struct structure *stack){
    int index = 0;
    while(index<=(stack -> top)){
        printf("%d\n", (stack -> array[index]));
        index++;
    }
    return 1;
}
int main(){
    //Initalise stack
    struct structure stack;
    stack.top = -1;
    
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 3);
    push(&stack, 50);
    push(&stack, 34);
    push(&stack, 35);
    push(&stack, 12);
    push(&stack, 25);
    push(&stack, 330);



    printf("Top element: %d\n", getTop(&stack));

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    printf("Is the stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");
    printStack(&stack);

}