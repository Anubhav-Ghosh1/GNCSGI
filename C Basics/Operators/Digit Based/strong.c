#include <stdio.h>
#include <limits.h>
int fact(int r)
{
    int factorial = 1;
    for (int i = 1; i <=r; i++)
    {
        
        factorial = factorial * i;
       
    }
    return factorial;
}
void strongNumber(int n)
{
    int r;
    int a = n;
    int f;
    int factorial = 1, sum = 0;
    while (n != 0)
    {

        r = n % 10;
        factorial = fact(r);
        n = n / 10;

        sum = sum + factorial;
    }
    if (sum == a)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    strongNumber(n);
    return 0;
}