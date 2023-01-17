#include <stdio.h>
#define size 10
int top = -1;
char st[size];
// push function
void push(char ch)
{
    if (top == size - 1)
        printf("stack is overflow");
    else
    {
        top++;
        st[top] = ch;
    }
}

// pop function
int pop()
{
    if (top == -1)
        return 0;
    else
    {
        top--;
        return 1;
    }
}

// peak function
char peak()
{
    return st[top];
}

// function for balanced paranthesis checking
void balanced_paranthesis()
{
    char exp[size];
    int i, check;
    printf("enter an expression");
    scanf("%s", exp);
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') // pushing into the stack if there is an opening paranthesis
            push(exp[i]);
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') // if there is closing paranthesis
        {
            if (top == -1) // checking the underflow condition if satisfied then the expression is unbalanced
                break;
            else
            {

                if ((peak() == '(' && exp[i] == ')') || (peak() == '[' && exp[i] == ']') || (peak() == '{' && exp[i] == '}'))
                {
                    pop(); // poping if there is same type of closing paranthesis
                }
                else
                    break; // if not then the expression is unbalanced
            }
        }
    }
    check = pop(); // checking the stack when the expression array is empty
    if (exp[i] != '\0')
        printf("Unbalanced");
    else
    {
        if (check == 0)
            printf("Balanced");
        else
            printf("Unbalanced");
    }
}

void main()
{
    balanced_paranthesis();
}