#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


int main()
{
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    first ->data = 10;
    first -> next = second;
    
    second ->data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = fourth;

    fourth ->data = 40; 
    fourth -> next = NULL;
}