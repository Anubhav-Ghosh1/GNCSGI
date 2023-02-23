#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("\nEnter first number: ");
    scanf("%d",&a);
    printf("\nEnter second number: ");
    scanf("%d",&b);
    printf("\nEnter third number: ");
    scanf("%d",&c);

    if((a>b) && (a>c))
    printf("\nA=%d is greatest",a);
    else if((b>a)&&(b>c))
    printf("\nB=%d is greatest",b);
    else
    printf("\nC=%d is greatest",c);

    return 0;
}