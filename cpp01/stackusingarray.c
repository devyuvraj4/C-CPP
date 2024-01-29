#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int isEmpty()
{
    return top == -1;
}

int main()
{
    push(10);
    push(20);
    push(30);

    printf("%d popped from stack\n", pop());

    return 0;
}
