#include <stdio.h>
#include <stdlib.h>
int main()
{

    /*
        Theory for calloc 
        • Full form of calloc is contiguous
        • It is declared in stdlib header file
        • It is used to allocate memory dyanmically 
          multiple blocs of memory & each block is of same
          size
        • It takes to argument
        • In calloc defalut initialization is done with
          zero
    */
   int n,i;
   printf("Enter value of n: ");
   scanf("%d",&n);
   int *ptr = NULL;
   ptr = (int*)calloc(n,sizeof(int));
   printf("Enter values \n");
   for (i = 0; i < n; i++)
   {
        printf("Enter value %d: ",i);
        scanf("%d",(ptr+i));
    
   }
   printf("Printing value: ");
   for (i = 0; i < n; i++)
   {
        printf("%d ",*(ptr+i));
   }
   /*
        Output
        without value initialization
        Enter value of n: 5
        Enter values 
        Printing value: 0 0 0 0 0

        with value initialization
        Enter value of n: 5
        Enter values 
        Enter value 0: 1
        Enter value 1: 2
        Enter value 2: 3
        Enter value 3: 4
        Enter value 4: 5
        Printing value: 1 2 3 4 5

   */
    free(ptr);

    int n1,i1;
    printf("Enter value of n: ");
    scanf("%d",&n1);
    int *ptr1 = NULL;
    ptr1 = (float*)malloc(n1*sizeof(float));
    printf("Enter value of malloc's allocated memory ");
    for(i1 = 0; i<n1 ;i++)
    {
        printf("Enter value %d: ",i);
        scanf("%d",(ptr1+i));
    }
    for (i1 = 0; i < n1; i++)
    {
        printf("%d ",*(ptr1+i));
    }
    free(ptr1);
    
    return 0;
}