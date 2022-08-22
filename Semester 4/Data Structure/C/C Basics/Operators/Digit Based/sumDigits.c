#include <stdio.h>
int sumDigit(int n)
{
    int r,sum = 0;
    while (n>0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int ans = sumDigit(n);
    printf("Sum of digit's present in the number is %d",ans);
    return 0;
}