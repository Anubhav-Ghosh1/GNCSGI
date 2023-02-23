#include <stdio.h>
int main()
{
    int a;
    int b;
    char ch;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nEnter operation");
    scanf("%c", ch);
    switch (ch)
    {
    case '+':
        printf("\nA + B = %d", a + b);
        break;
    case '-':
        printf("\nA - B = %d", a - b);
        break;
    case '*':
        printf("\nA * B = %d", a * b);
        break;
    case '/':
        printf("\nA / B = %d", a / b);
        break;
    }
    return 0;
}