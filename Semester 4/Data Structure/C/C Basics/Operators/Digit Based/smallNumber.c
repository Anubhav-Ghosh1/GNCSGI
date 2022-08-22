#include <stdio.h>
#include <limits.h>
int minNumber(int n)
{
    int r, min = INT_MAX;
    int a = n;
    while(n>0)
    {

        r = n % 10;
        n = n / 10;
        if (r<min)
        {
            min = r;
        }
    }

    return min;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ans = minNumber(n);
    printf("Minimum digit in the number is %d", ans);
    return 0;
}