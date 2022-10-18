#include <stdio.h>
#include <stdlib.h>

int *queue, front = 0, rear = 0, n, size = 0;

/* queue is empty or not */
int isEmpty()
{
    if (size == 0)
        return 1;
    else
        return 0;
}

/* insert an element into the queue */
void enqueue(int data)
{
    if (size == n)
        printf("Queue is full\n");
    else
    {
        queue[rear] = data;
        rear = (rear + 1) % n;
        size++;
    }
}

/* delete an element from the queue */
void dequeue()
{
    if (isEmpty())
        printf("Queue is Empty\n");
    else
    {
        queue[front] = 0;
        front = (front + 1) % n;
        size--;
    }
}

/* display elements present in the queue */
void display()
{
    int i, j = 0;
    printf("Elements in queue:");
    for (i = front; j < size; i = (i + 1) % n, j++)
        printf("%3d", queue[i]);
    printf("\n");
}

int main()
{
    int data, ch;
    printf("Enter the size of the Queue:");
    scanf("%d", &n);
    queue = (int *)malloc(sizeof(int) * n);
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n");
        printf("3. Size\n4. Is Empty\n5. Display\n");
        printf("6. Exit\nEnter ur choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data to insert:");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("No of elements in queue:%d\n", size);
            break;
        case 4:
            if (isEmpty())
                printf("Queue is Empty\n");
            else
                printf("Queue is available\n");
            break;

        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Please retry with correct option\n");
            break;
        }
    }
    return 0;
}