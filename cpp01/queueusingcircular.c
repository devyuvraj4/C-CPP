#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % MAX_SIZE == front)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = value;
}

int dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return -1;
    }
    int dequeuedValue = queue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX_SIZE;
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
