#include <stdio.h>

//stack
void push();
int peak();
int pop();

int main(){
    int top = -1;
    int size;
    int stack[size];

    push(7,5);
    printf("%d",peak());
    // top++;
    // stack[top] = 7;
    // printf("%d",stack[top]);
    return 0;
}

void push(int value, int size){
    int top;
    int stack[size];
    if (size == top)
    {
        printf("Stack is full!!");
    }
    else
    {
        top = top + 1;
        stack[top] = value;
    }
}


int peak(){
    int top,size;
    int stack[size];
    if (top == -1)
    {
        printf("Stack underflow!");
        return 1;
    }
    else
    {
        return stack[top];
    }
}

int pop(){
    int top,size;
    int stack[size];
    if (top == -1)
    {
        printf("Stack Underflow!");
        return 1;
    }
    else
    {
        top--;
        return stack[top];
    }
}