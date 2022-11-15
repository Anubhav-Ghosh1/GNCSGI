#include <stdio.h>

void insertionSort(int *arr,int n)
{
    int i = 1;
    while(i<n)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 )
        {
            if(arr[j] > key)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }

            j = j-1;
        }
        arr[j+1] = key;
        i++;
    }
    
}

int main()
{
    int even[8] = {5,6,4,3,2,1,7,8};
    printf("Original Array \n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",even[i]);
    }

    insertionSort(even,8);
    printf("\nSorted Array \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d ",even[i]);
    }
    
}