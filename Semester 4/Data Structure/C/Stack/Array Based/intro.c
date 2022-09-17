#include <stdio.h>
#define size 8
int arr[size];
int top = -1;

void push(int element)
{
    if(top == size-1)
    {
        printf("Stack is full can't push % in stack\n",element);
    }
    else
    {
        top++;
        // printf("top %d ",top);
        arr[top] = element;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty can not perform pop operation\n");
    }
    else
    {
        printf("%d was removed from stack\n", arr[top]);
        top--;
    }
}
void printStack()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void topElement()
{
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element is %d\n",arr[top]);
    }
    
}
int sizeOfStack()
{
    if(top == -1)
    {
        return 0;
    }
    else
    {
    int a = top;
    return a+1;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    // before pop
    printStack();
    printf("\n");
    // after pop
    pop();
    printStack();
    int size1 = sizeOfStack();
    printf("Size of stack is %d\n",size1);
    topElement();
    return 0;
}
