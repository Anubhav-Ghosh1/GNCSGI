#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
                    Theory for malloc
        • generally we use maaloc to allocate
          heap memory to structure where as 
          we use calloc to allocate heap memory to
          array

        • MALLOC means: Memory Allocation
        • it takes only one argument
        • Malloc return's void pointer which
        can be further casted into desired format
        • void* malloc(size_t(unsigned int) size)
        • memory can not be negative so we use
        usigned type of data
        • Void pointer is also knows as generic pointer
        • How to type cast?
        • Ans:- (int*) (float*)
        if you haven't initlized value in the 
        memory you allocated it will contain garbage value
        • If malloc is not able to allocate memory from heap
        it will return NULL pointer other wise it will
        return base address of the allocated memory
        • free function to free the memory

    */

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
        free(ptr);

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