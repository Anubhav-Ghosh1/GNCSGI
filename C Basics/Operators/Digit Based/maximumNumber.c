#include <stdio.h>
int maxNumber(int n)
{
    int r, max = 0;
    for (int i = 0; i < n; i++)
    {
        
        r = n % 10;
        if(r>max)
        {
            max = r;
        }
        n = n / 10;

    }
    
    return max;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ans = maxNumber(n);
    printf("Maximum digit in the number is %d", ans);
    return 0;
}