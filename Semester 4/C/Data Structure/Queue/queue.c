#include <stdio.h>
#define size 100
// int front = -1;
// int rear = -1;
// int arr[size];

    int front = -1;
    int rear = -1;
    int arr[100]; 

void enqueue(int element)
{
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = element;
        rear++;
    }
    else if(rear == size - 1)
    {
        printf("Queue is full and can't be pushed %d\n",element);
    }
    else{
        arr[rear] = element;
        rear++;
    }
}
void dequeue()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else if(front == rear)
    {
        printf("Can't perform dequeue operation\n");
    }
    else
    {
        printf("Deleted element %d\n",arr[front]);
        front++;
    }
}
void print()
{
    for (int i = front; i < rear; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    print();
    dequeue();
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();



    return 0;
}