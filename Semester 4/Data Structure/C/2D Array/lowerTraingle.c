#include<stdio.h>
int main()
{
    int arr[5][5]={2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i<=j)
            {
                printf("0 ");
            }
            else
            {
              printf("%d ",arr[i][j]);
            }
        }
            printf("\n");
        
    }
   /* for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
 */   
    return 0;
}
