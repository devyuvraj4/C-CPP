#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    struct Node *temp = top;
    int poppedValue = temp->data;
    top = top->next;
    free(temp);
    return poppedValue;
}

int isEmpty()
{
    return top == NULL;
}

int main()
{
    push(10);
    push(20);
    push(30);

    printf("%d popped from stack\n", pop());

    return 0;
}
