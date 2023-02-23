#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter value: ");
    scanf("%d",&a);
    if(a&1)
    {
        printf("\nOdd");
    }
    else
    {
        printf("\neven");
    }
    int b;
    b = a >> 1;
    int c = b << 1;
    if(a != c)
    {
        printf("\nOdd");
    }
    else
    {
        printf("\neven");
    }

    int d = a;
    if((d^1) == (a+1))
    {
        printf("\nEven");
    }
    else
    {
        printf("\nOdd");
    }
    return 0;
}