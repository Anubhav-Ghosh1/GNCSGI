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
void linearSearch(int element)
{
    for(int i = top; i >= 0; i--)
    {
        if(arr[i] == element)
        {
            printf("Element found on index %d\n",i);
            return ;
        }
    }
    printf("Element not found\n");
    
}
int BinarySearch(int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + size)/2;

    for (int i = top; i >= 0; i--)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        
        if (key<arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end)/2;
        
    }
    return -1;
    
}

int main()
{
    push(1);
    push(2);   
    push(3);   
    push(4);   
    push(5);   
    push(6);
    int search = BinarySearch(5);
    printf("%d ",search);
   

}