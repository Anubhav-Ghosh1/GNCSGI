#include <stdio.h>
#define size 10
int top = -1;
char st[size];
void push(char ch)
{
    if (top == size - 1)
        printf("stack is full");
    else
    {
        top++;
        st[top] = ch;
    }
}
void pop()
{
    if (top == -1)
        printf("stack is underflow");
    else
    {
        printf("%c", st[top]);
        top--;
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%c", st[i]);
    }
}
int priority_check(char ch)
{
    if (ch == '^')
        return 3;
    else
    {
        if (ch == '*' || ch == '/')
            return 2;

        else if (ch == '+' || ch == '-')
            return 1;
    }
}

void post_fix()
{
    char exp[10];
    int i, p, t;
    printf("enter an Infix expression");
    scanf("%s", exp);
    printf("Postfix expression : ");
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*' || exp[i] == '^')
        {
            if (top == -1)
            {
                push(exp[i]); // pushing any operator if stack is empty
            }
            else
            {
                p = priority_check(exp[i]);
                t = priority_check(st[top]);
                if (p > t)
                    push(exp[i]); // push the operator if priority is more than the operator on stack top
                else
                {
                    while (p <= priority_check(st[top]))
                        pop(); // pop the operator until operator's priority is less and equal to stack top operator
                    push(exp[i]);
                }
            }
        }

        else
            printf("%c", exp[i]); // printing the operand
    }
    display();
}

void main()
{
    post_fix();
}