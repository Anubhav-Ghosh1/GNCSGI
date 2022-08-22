#include <stdio.h>
int countDigit(int n)
{
    int r,count = 0;
    while (n>0)
    {
        r = n%10;
        count++;
        n = n/10;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int ans = countDigit(n);
    printf("Number of digit's present in the number is %d",ans);
    return 0;
}
