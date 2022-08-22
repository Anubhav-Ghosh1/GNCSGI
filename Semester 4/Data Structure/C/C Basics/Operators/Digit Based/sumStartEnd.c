#include <stdio.h>
int sumStartLastDigit(int n)
{
    int r, sum = 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        // This will run till first digit
        r = n % 10;
        n = n / 10;

        if (i == 0)
        {
            // last digit
            a = n % 10;
        }
    }
    sum = r + a;
    return sum;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ans = sumStartLastDigit(n);
    printf("Sum of digit's present in the number is %d", ans);
    return 0;
}