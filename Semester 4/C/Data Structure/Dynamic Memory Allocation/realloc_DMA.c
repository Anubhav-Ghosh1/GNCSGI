#include <stdio.h>
#include <stdlib.h>
int main()
{
        int n,i;
        printf("Enter value of n: ");
        scanf("%d",&n);
        int *ptr = NULL;
        ptr = (int*)malloc(n * sizeof(int));
        printf("Enter values \n");
        for (i = 0; i < n; i++)
        {
            
            printf("Enter values %d : ",i);
            scanf("%d",(ptr+i));
        }
        printf("printing values: ");
        for (i = 0; i < n; i++)
        {
            printf("%d\t",*(ptr+i));
            /* * indirection operator */
        }
        /* making the memory free */
        printf("\nEnter new size: ");
        scanf("%d",&n);
        int *ptr1 = (int *)realloc(ptr,sizeof(int)*n);
        printf("\nprinting values: ");
        for (i = 0; i < n; i++)
        {
            printf("%d\t",*(ptr1+i));
            /* * indirection operator */
        }
        free(ptr1);

        /*
            Output
            Enter value of n: 5
            Enter values 
            Enter values 0 : 1
            Enter values 1 : 2
            Enter values 2 : 3
            Enter values 3 : 4
            Enter values 4 : 5
            printing values: 1 2 3 4 5
         */
    return 0;
}