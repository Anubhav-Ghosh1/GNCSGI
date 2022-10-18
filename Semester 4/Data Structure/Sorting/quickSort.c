#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int s,int e)
{
    // This will return index
    int pivot = arr[s];
    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    // finding right position for pivot element
    int pivotIndex = s + count;
    swap(&arr[pivotIndex],&arr[s]);
    int i = s,j = e;
    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        // if program raeches this line this means we have to now swap an element
        // but first we have to check the condition again
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
    
}

void quickSort(int *arr,int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    // partition
    int p = partition(arr,s,e);

    // left side sort
    quickSort(arr,s,p-1);

    // right side sort
    quickSort(arr,p+1,e);
}


int main()
{
    /**
     * @brief 
     * Pick one element and put it in its
     * right position by counting elements less then it
     * then call for quick sort for both the 
     * parts less then pivot and greater then pivot
     */
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int *even = (int *)calloc(sizeof(int),n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ",i);
        scanf("%d",&even[i]);
    }
    
    quickSort(even,0,n-1);
    printf("\nSorted Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",even[i]);
    }
    
    
}