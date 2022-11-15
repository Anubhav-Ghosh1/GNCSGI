#include <stdio.h>
#define size 8
int arr[size];
int top = -1;
void push(int element)
{
    if(top == size-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        arr[top] = element;
    }
    
}

void pop()
{
    if(top == -1)
    {
        printf("pop can not be performed");
    }
    else
    {
        top--;
    }
}

void print()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int sumOfStack()
{
    int sum = 0;
    for (int i = top; i >= 0; i--)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    push(1);
    push(2);   
    push(3);   
    push(4);   
    push(5);   
    push(6);
    int sum = sumOfStack();
    printf("Sum of elements in stack is %d\n",sum);   

}