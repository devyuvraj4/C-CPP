#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow\n");
        return -1;
    }
    struct Node *temp = front;
    int dequeuedValue = temp->data;
    front = front->next;
    free(temp);
    if (front == NULL)
    {
        rear = NULL;
    }
    return dequeuedValue;
}

int isEmpty()
{
    return front == NULL;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d dequeued from queue\n", dequeue());

    return 0;
}
