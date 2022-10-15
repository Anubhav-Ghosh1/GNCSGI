#include <stdio.h>
#include <stdlib.h>
#define size 1000
int rear = -1;
int front = -1;
int arr[size];
int isFull()
{
    if(front == 0 && rear == size-1 || front != 0 && rear == (front-1)%(size-1) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if(front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int element)
{
    if(isFull())
    {
        printf("Enqueue not available %d can't be pushed\n",element);
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else if(front != 0 && rear == size -1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    arr[rear] = element;
}
int dequeue()
{
    if(isEmpty())
    {
        printf("Can't perform dequeue operation\n");
    }
    int ans = arr[front];
    arr[front] = -1;
    if(front == rear)
    {
        // single element
        front = 0;
        rear = 0;
    }
    else if(front == size-1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    return ans;

}

int peekFront()
{
    if(isEmpty())
    {
        printf("Empty\n");
    }
    else
    {
        return arr[front];
    }
}
int peekRear()
{
    if(isEmpty())
    {
        printf("Empty\n");
    }
    else
    {
        return arr[rear];
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("%d front element\n",peekFront());
    printf("%d rear element\n",peekRear());
    return 0;
}