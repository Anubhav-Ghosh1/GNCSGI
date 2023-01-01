#include <stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int *arr,int size)
{
    int i,j,minIndex;
    for (i = 0; i < size-1; i++)
    {
        minIndex = i;
        for (j = i+1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
            
                minIndex = j;
            
        }
            if(minIndex != i)
                swap(&arr[minIndex],&arr[i]);
        
        
    }
    
}

void printArray(int *arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int even[6] = {4,2,1,6,7,8};
    printArray(even,6);
    selection(even,6);
    printArray(even,6);
    return 0;
}