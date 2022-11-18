#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *arr,int key,int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }
        
        mid = (s + e) / 2;
        
    }
    return -1;
}

int main() {
    
    printf("Enter size of array: ");
    int n;
    scanf("%d",&n);
    int *even = calloc(sizeof(int),n);
    printf("Enter data into array\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&even[i]);
    }
    int key = 0;
    printf("Enter value you want to find: ");
    scanf("%d",&key);
    printf("\n");
    printf("Found on index %d",binarySearch(even,key,n-1));

    return 0;
}
