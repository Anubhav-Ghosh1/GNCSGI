#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
} Node;

void enqueu(Node **rear, Node **front, int value)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    if ((*front) == NULL)
    {
        (*front) = temp;
        (*rear) = temp;
    }
    (*rear)->next = temp;
    (*rear) = temp;
    temp->next = NULL;
}

void dequeue(Node **front)
{
    if((*front) == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        (*front) = (*front)->next;
    }
}

void printLinkedList(Node *head,Node *rear)
{
    printf("Printing queue\n");
    Node *temp = head;
    Node *temp1 = rear;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void frontElement(Node **front)
{
    if((*front) == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        printf("%d\n",(*front)->data);
    }
}

void frontElement(Node **rear)
{
    if((*rear) == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        printf("%d\n",(*rear)->data);
    }
}

void search(Node **front,int key)
{
    Node *temp = *front;
    int i = 0;
    if((*front) == NULL)
    {
        return ;
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                printf("Found %d on %d\n",temp->data,i);
                break;
            }
            i++;
            temp = temp->next;
        }
    }
}


int main()
{
    Node *rear = NULL;
    // rear->next= NULL;
    Node *front = NULL;
    printf("A\n");
    enqueu(&rear, &front, 10);
    enqueu(&rear, &front, 20);
    enqueu(&rear, &front, 30);
    printf("B\n");
    enqueu(&rear, &front, 40);
    enqueu(&rear, &front, 50);
    printLinkedList(front,rear);
    dequeue(&front);
    dequeue(&front);
    printLinkedList(front,rear);
    return 0;
}