#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Node *head = NULL;
// Node *tail = NULL;

void insertAtBegin(Node **head,int val)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = val;
    temp->next = *head;
    *head = temp;
}

void insertAtMiddle(Node **head,int val,int position)
{
    int count = 0;
    Node *temp = *head;
    while (count != position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtPosition(Node **head,int val,int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    Node *temp = *head;
    Node *previous = NULL;
    int count = 0;
    while (count != position - 1)
    {
        previous = temp;
        temp = temp->next;
        count++;
    }
    previous->next = newNode;
    newNode->next = temp;
}
void insertAfterData(Node **head,int val,int afterData)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    Node *temp = *head;
    Node *previous = NULL;
    while (temp->data != afterData)
    {
        previous = temp;
        temp = temp->next;
    }
    previous->next = newNode;
    newNode->next = temp;
}

void insertAtEnd(Node **tail,int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    Node *temptail = *tail;
    temptail->next = newNode;
    newNode->next = NULL;
}

void create(Node **head,Node **tail,int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;

    Node *temphead = *head;
    if (temphead == NULL)
    {
        *head = newNode;
        *tail = newNode;
    }
    else
    {
        Node *temptail = *tail;
        temptail->next = newNode;
        *tail = newNode;
    }
}

void reverseAnArray(Node **head)
{
    Node *current = *head;
    Node *previous = NULL;
    Node *temp = NULL;
    while (current != NULL)
    {
        temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    *head = previous;
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

int lengthOfList(Node **head)
{
    Node *temp = *head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void nodeAfterNode()
{
}

void findMiddleElement(Node **head)
{
    Node *temp = *head;
    int size = lengthOfList(head);
    size = size / 2;
    int count = 0;
    while (count != size)
    {
        temp = temp->next;
        count++;
    }
    printf("Data in the middle of the node is %d\n", temp->data);
}

void deleteFromBegin(Node **head)
{
    Node* ptr = *head;
    Node *ptr1 = ptr->next;
    *head = ptr1;
    //	ptr->next = NULL;
    //	free(ptr);
}
void deleteAtPosition(Node **head,int position)
{
    Node *temp = *head;
    Node *previous = NULL;
    int count = 0;
    while (count != position - 1)
    {
        previous = temp;
        temp = temp->next;
        count++;
    }
    previous->next = temp->next;
}

void deleteFromEnd(Node **head,Node **tail)
{
    Node *ptr = *head;
    Node *previous = NULL;
    while (ptr->next != *tail)
    {
        ptr = ptr->next;
        previous = ptr;
    }
    *tail = previous;
    ptr->next = NULL;
    printf("Tail %d\n", previous->data);
}

void mergeTwoLinkedList(Node **head,Node **head2)
{
    Node *temp = *head;
    Node *tempHead2 = *head2;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = *head2;
}

void sumOfLinkedList(Node **head)
{
    int sum = 0;
    Node *temp = *head;
    while (temp != NULL)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    printf("Sum is: %d\n", sum);
}

void maxOfLinkedList(Node **head)
{
    int max = INT_MIN;
    Node *temp = *head;
    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    printf("Maximum %d\n", max);
}

void minOfLinkedList(Node **head)
{
    int min = INT_MAX;
    Node *temp = *head;
    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    printf("Minimum  %d\n", min);
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
void secondLast(Node **head)
{
    Node *temp = *head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    printf("Last second value is %d\n", temp->data);
}

void isEven(Node **head)
{
    Node *temp = *head;
    int arr[100];
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            arr[count] = temp->data;
            count++;
        }
        temp = temp->next;
    }
    int i;
    printf("\nCount of even elements: %d\n", count);
    printf("Elements are: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}

void isOdd(Node **head)
{
    Node *temp = *head;
    int arr[100];
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data % 2 != 0)
        {
            arr[count] = temp->data;
            count++;
        }
        temp = temp->next;
    }
    int i;
    printf("Count of odd elements: %d\n", count);
    printf("Elements are: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}

int lastElement(Node **head)
{
    int val;
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    val = temp->data;
    return val;
}
int firstElement(Node **head)
{
    Node *temphead = *head;
    int val = temphead->data;
    return val;
}

int main()
{
    /*
    int choice;
    while (1)
    {

        printf("\n                MENU                             \n");
        printf("\n 1.Create     \n");
        printf("\n 2.Display    \n");
        printf("\n 3.Insert at the beginning    \n");
        printf("\n 4.Insert at the end  \n");
        printf("\n 5.Insert at specified position       \n");
        printf("\n 6.Delete from beginning      \n");
        printf("\n 7.Delete from the end        \n");
        printf("\n 8.Delete from specified position     \n");
        printf("\n 9.Exit       \n");
        printf("\n 10.Print       \n");
        printf("\n 11.Maximum       \n");
        printf("\n 12.Minimum       \n");
        printf("\n 13.Linear Search       \n");
        printf("\n--------------------------------------\n");
        printf("Enter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            printLinkedList();
            break;
        case 3:
            insertAtBegin();
            break;
        case 4:
            insertAtEnd();
            break;
        case 5:
            insertAtPosition();
            break;
        case 6:
            deleteFromBegin();
            break;
        case 7:
            deleteFromEnd();
            break;
        case 8:
            deleteAtPosition();
            break;

        case 9:
            exit(0);
            break;
        case 10:
            printLinkedList();
            break;
        case 11:
            maxOfLinkedList();
            break;
        case 12:
            minOfLinkedList();
            break;
        case 13:
            LinearSearch();
        default:
            printf("n Wrong Choice:n");
            break;
        }
    }
    */
        //	Insertion
        	// int data;
        	// printf("Enter size: ");
        	// scanf("%d",&size);
        
        	// printf("Enter data: ");
        	// int i;
        	// for(i = 0; i < size; i++)
        	// {
        
        	// 	scanf("%d",&data);
        	// 	create(data);
        	// }
        Node *head = NULL;
        Node *tail = NULL;
        create(&head,&tail,10);
        insertAtBegin(&head,20);
        insertAtBegin(&head,30);
        insertAtBegin(&head,50);
        printLinkedList(&head);
        insertAtPosition(&head,40,3);
        // insertAfterData();
        printLinkedList(&head);

        // Deletion
        //	deleteFromBegin();
        //	deleteFromEnd();
        //	Printing

        deleteAtPosition(&head,3);
        printf("\nAfter deletion at 4th position\n");
        printLinkedList(&head);

        //	Linear Search
        printf("\nLinear search\n");
        LinearSearch(&head);
        printf("\n");

        //	Maximum & Minimum
        maxOfLinkedList(&head);
        minOfLinkedList(&head);

        // 	Odd
        printf("\n");
        isOdd(&head);

        // 	Even
        printf("\n");
        isEven(&head);

        //	LastElement
        int last = lastElement(&head);
        printf("\nLast element: %d\n", last);

        // 	Second last Element
        secondLast(&head);

        //	FirstElement
        int first = firstElement(&head);
        printf("First element: %d\n", first);

        //	Reverse
        reverseAnArray(&head);
        printf("Reverse of LinkedList\n");
        printLinkedList(&head);

        // SizeOf LinkedList
        printf("\nSize of linkedlist %d\n", lengthOfList(&head));

        // mergeTwoList
        
        // Creating new linkedlist
        Node *head2 = NULL;
        Node *tail2 = NULL;

        // entering data
        create(&head2,&tail2,2);
        insertAtBegin(&head2,5);
        insertAtBegin(&head2,7);
        printf("\nPrinting second linkedlist\n");
        printLinkedList(&head2);

        // Merging two linkedlist
        mergeTwoLinkedList(&head,&head2);
        printLinkedList(&head);

        return 0;
}
