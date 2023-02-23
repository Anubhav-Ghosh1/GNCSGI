#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    float x = ((float)a/2) - (a/2);
    if(x > 0)
    {
        printf("\nOdd");
    }
    else
    {
        printf("\nEven");
    }
    return 0;
}