#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    if(a>b)
    {
        printf("\nA is greater %d",a);
    }
    else
    {
        printf("\nB is greater %d",b);
    }
    return 0;
}