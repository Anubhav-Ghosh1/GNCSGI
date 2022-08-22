#include <stdio.h>
int printFirst(int n)
{
    int r;
    while(n>0)
    {
        // This will run till first digit
        r = n % 10;
        n = n / 10;
        
    }
    
    return r;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ans = printFirst(n);
    printf("First digit's present in the number is %d", ans);
    return 0;
}