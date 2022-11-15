#include <stdio.h>
int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int row = 3;
    int column = 3;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < column ;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
        printf("\n");
        printf("\n");
    int primary = 0;
    int seconday = 0;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < column ;j++)
        {
            if(i==j)
            {
                primary += arr[i][j];
            }
            if((i+j) == (2))
            {
                seconday += arr[i][j];
            }
        }
        printf("\n");
    }
        printf("Primary %d\n",primary);
        printf("Secondary %d",seconday);
    return 0;
}
