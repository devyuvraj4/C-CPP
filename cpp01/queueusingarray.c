#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    queue[++rear] = value;
}

int dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return -1;
    }
    int dequeuedValue = queue[front++];
    if (front > rear)
    {
        front = rear = -1;
    }
    return dequeuedValue;
}

int isEmpty()
{
    return front == -1;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d dequeued from queue\n", dequeue());

    return 0;
}
