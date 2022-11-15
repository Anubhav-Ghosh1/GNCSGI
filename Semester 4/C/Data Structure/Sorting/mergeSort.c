#include <stdio.h>
#include <stdlib.h>
void merge(int *arr,int s,int e)
{
    int mid = (s+e)/2;
    int length1 = mid - s + 1;
    int length2 = e - mid;
    int *first = (int *)malloc(sizeof(int)*length1);
    int *second = (int *)malloc(sizeof(int)*length2);

    int indexStart = s;
    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[indexStart++];
    }


    indexStart = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        second[i] = arr[indexStart++];
    }

    int index1 = 0;
    int index2 = 0;

    indexStart = s;
    while(index1 < length1 && index2 < length2)
    {
        if(first[index1] < second[index2])
        {
            arr[indexStart++] = first[index1++]; 
        }
        else
        {
            arr[indexStart++] = second[index2++];
        }
    }
    while(index1 < length1)
    {
        arr[indexStart++] = first[index1++]; 
    }
    while (index2 < length2)
    {
         arr[indexStart++] = second[index2++];
    }
    

}

void mergeSort(int *arr,int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int even[6] = {6,5,4,3,2,1};
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nSorted Array\n");
    int n = 6;
    mergeSort(even,0,n-1);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",even[i]);
    }
    
    return 0;
}