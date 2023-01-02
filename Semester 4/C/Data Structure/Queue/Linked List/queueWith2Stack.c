#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

void push(Node **top,int val)
{
    Node* newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    if((*top) == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = (*top);
    }
    (*top) = newNode;
    // printf("Inserted An Node\n");
}
int isEmpty(Node **top)
{
    if((*top) == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop(Node **top)
{
    if(isEmpty(top))
    {
        printf("Stack is empty\n");
    }
    else{
        Node* temp = (*top);
        int temp_data = (*top)->data;
        (*top) = (*top)->next;
        free(temp);
        return temp_data;
    }
}
void display(Node **top)
{
    if(isEmpty(top))
    {
        printf("Stack is empty\n");
    }
    else
    {
        Node* temp = (*top);
        while(temp->next != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("%d->NULL\n",temp->data);
    }
}
int topElement(Node **top)
{
    Node* temp = (*top);
    if(isEmpty(top))
    {
        return -1;
    }
    else
    {
        return temp->data;
    }
}

int linearSearch(Node **top,int key)
{
    Node* temp = (*top);
    if(!isEmpty(top))
    {
        int i = 0;
        while (temp->next != NULL)
        {
            if(temp->data == key)
            {
                return i;
            }
            i++;
            temp = temp->next;
        }
    }
    return -1;
}

void queue(Node **top,Node **top1,int val)
{
    while (!isEmpty(top))
    {
        int a = topElement(top);
        push(top1,a);
        pop(top);
    }
    push(top,val);
    while(!isEmpty(top1))
    {
        int b = topElement(top1);
        push(top,b);
        pop(top1);
    }   
}

void dequeue(Node **top)
{
    if(isEmpty(top))
    {
        return ;
    }
    int a = topElement(top);
    printf("Dequeu %d\n",a);
    pop(top);
}

int main()
{
    Node *top = NULL;
    Node *top1 = NULL;
    queue(&top,&top1,1);
    queue(&top,&top1,2);
    queue(&top,&top1,3);
    queue(&top,&top1,4);
    dequeue(&top);
    return 0;
}