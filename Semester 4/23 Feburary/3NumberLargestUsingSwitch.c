#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nEnter third number: ");
    scanf("%d", &c);

    switch (a > b)
    {
    case 1:
        switch (a > c)
        {
        case 1:
            printf("\nA is greater");
            break;
        case 0:
            printf("\nC is greater");
            break;
        }
        break;
    case 0:
        switch (b > c)
        {
        case 1:
            printf("\nB is greater");
            break;
        case 0:
            printf("\nC is greater");
            break;
        }
        break;
    }
    return 0;
}