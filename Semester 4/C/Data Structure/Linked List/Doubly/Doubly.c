#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
} Node;

void create(Node **head, Node **tail, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->previous = NULL;

    Node *temphead = *head;
    if (temphead == NULL)
    {
        *head = newNode;
        *tail = newNode;
    }
    else
    {
        newNode->next = *head;
        newNode->previous = *tail;
        *head = newNode;
    }
}

void insertAtBegin(Node **head, int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = *head;
    temp->previous = NULL;
    *head = temp;
}

void insertAtTail(Node **tail, int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    (*tail)->next = temp;
    temp->previous = *tail;
    temp->next = NULL;
    *tail = temp;
}

void insertAtPosition(Node **head, int val, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    int count = 0;
    Node *previousNode = NULL;
    Node *temp = *head;
    while (count != position - 1)
    {
        previousNode = temp;
        temp = temp->next;
        count++;
    }
    previousNode->next = newNode;
    newNode->previous = previousNode;
    newNode->next = temp;
    temp->previous = newNode;
}

void printLinkedList(Node **head)
{
    Node *temp = *head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Length of te linkedlist
int getLength(Node **head)
{
    Node *temp = *head;
    if ((*head) == NULL)
    {
        return 0;
    }
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// DeleteNode
void deleteNode(Node **head, int position)
{
    if (position == 1)
    {
        // deleting the first position
        Node *temp = *head;
        /*
            head                    new head
            temp                    temp->next
            [] ->                   []              ->[]
            temp->next =NULL        <-prvious = NULL
        */
        temp->next->previous = NULL;
        *head = temp->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        int count = 0;
        Node *previous = NULL;
        Node *current = *head;
        while (count != position - 1)
        {
            previous = current;
            current = current->next;
            count++;
        }
        current->previous = NULL;
        previous->next = current->next;
        current->next = NULL;
        free(current);
    }
}

// Maximim
int getMaximum(Node **head)
{
    int maximum = INT_MIN;
    Node *temp = *head;
    while(temp != NULL)
    {
        if(temp->data > maximum)
        {
            maximum = temp->data;
        }
        temp = temp->next;
    }
    return maximum;
}

// Minimum
int getMinimum(Node **head)
{
    Node *temp = *head;
    int minimum = INT_MAX;
    while(temp != NULL)
    {
        if(minimum < temp->data)
        {
            minimum = temp->data;
        }
        temp = temp->next;
    }
    return minimum;
}

// Sum
int getSum(Node **head)
{
    Node *temp = *head;
    int sum = 0;
    while(temp != NULL)
    {
        sum = sum + temp->data;
        temp = temp -> next;
    }
    return sum;
}

// Even
void isEven(Node **head)
{
    Node* temp = *head;
    int arr[100];
    int count = 0;
    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            arr[count] = temp->data;
        }
        count++;
        temp = temp->next;
    }
    printf("Number of even elements %d and elements are: ",count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

// Odd
void isOdd(Node **head)
{
    Node* temp = *head;
    int arr[100];
    int count = 0;
    while(temp != NULL)
    {
        if(temp->data % 2 != 0)
        {
            arr[count] = temp->data;
        }
        count++;
        temp = temp->next;
    }
    printf("Number of odd elements %d and elements are: ",count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

// LastNode
void getLastNode(Node **tail)
{
    if((*tail) == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        printf("Last Node %d\n",(*tail)->data);
    }
}

void getLastSecondNode(Node **tail)
{
    if((*tail) == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        printf("Last Second Node %d\n",(*tail)->previous->data);
    }
}

void getFirstNode(Node **head)
{
    if((*head) == NULL)
    {
         printf("Empty\n");
    }
    else
    {
        printf("First Node %d\n",(*head)->data);
    }
}

void findMiddleElement(Node **head)
{
    Node *temp = *head;
    int size = getLength(head);
    size = size / 2;
    int count = 0;
    while (count != size)
    {
        temp = temp->next;
        count++;
    }
    printf("Data in the middle of the node is %d\n", temp->data);
}

void LinearSearch(Node **head)
{
    int val;
    printf("Enter data for linear search: ");
    scanf("%d", &val);
    Node *temp = *head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            printf("Element found at %d index\n", count + 1);
            break;
        }
        count++;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Not found\n");
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    create(&head, &tail, 1);
    insertAtBegin(&head, 10);
    insertAtBegin(&head, 20);
    insertAtTail(&tail, 40);
    insertAtPosition(&head, 50, 2);
    printLinkedList(&head);

    // Delete
    deleteNode(&head,2);
    printLinkedList(&head);
    return 0;
}