#include <stdio.h>
#include <ctype.h>
int s[10];
int top = -1;
void push(int x)
{
    top++;
    s[top] == x;
}
int pop()
{
    return s[top--];
}
void main()
{
    char a[10];
    int i, n, d, b, c;
    printf("enter an expression");
    scanf("%s", a);
    i = 0;
    while (a[i] != '\0')
    {
        if (isdigit(a[i]))
        {
            n = a[i] - 48;
            push(n);
        }
        else
        {
            c = pop();
            b = pop();
            switch (a[i])
            {
            case '+':
                d = b + c;
                break;
            case '*':
                d = b * c;
            }
            push(d);
        }
    }
    printf("%d", pop());
}