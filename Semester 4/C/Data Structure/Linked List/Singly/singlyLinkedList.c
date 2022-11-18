#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
// Inserting at the beginning of the linkedlist
void insertAtBegin(Node **head, int val)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = val;
    temp->next = *head;
    *head = temp;
    // ** to pass by reference
    // *address of head to temp
    // now temp is the head
}
void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("Null\n");
}
void insertAtTail(Node **head, int val)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = val;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        Node *lastNode = *head;
        while (lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = temp;
    }
}

// inserting at position
void insertAtMiddle(Node **head,int val,int position)
{
    Node* temp = *head;
    if(position == 1)
    {
        insertAtBegin(head,val);
    }
    if(temp->next == NULL)
    {
        insertAtTail(head,val);
    }
    
    int count = 0;
    while(count != position-1)
    {
        temp = temp->next;
        count++;
    }
    Node* nodeToInsert = (Node*)malloc(sizeof(Node));
    nodeToInsert->data = val;
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node **head,int position)
{
    Node* temp = *head;
    if(position == 1)
    {
        *head = temp->next;
        free (temp);
        return ;
    }
    Node *previous = (Node*)malloc(sizeof(Node));
    previous->next = NULL;
    int count = 1;
    while(temp != NULL && count != position)
    {
        previous = temp;
        temp = temp->next;
        count++;
    }
    if(temp == NULL)
    {
        return ;
    }
    previous->next = temp->next;
    free(temp);

}

void sumOfALinkedList(Node **head)
{
    Node* temp = *head;
    int sum = 0;
    while(temp != NULL)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    printf("Sum is %d\n",sum);
}

void evenSum(Node **head)
{
    Node* temp = *head;
    int sum = 0;
    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            sum = sum + temp->data;
        }
        temp = temp->next;
    }
    printf("Even sum: %d\n",sum);
}

int main()
{
    Node *head = NULL;
    insertAtBegin(&head, 10);
    insertAtBegin(&head, 20);
    insertAtBegin(&head, 30);
    insertAtTail(&head, 1);
    insertAtMiddle(&head,2,1);
    printNode(head);
    deleteNode(&head,2);
    printNode(head);
    sumOfALinkedList(&head);
    evenSum(&head);
    return 0;
}