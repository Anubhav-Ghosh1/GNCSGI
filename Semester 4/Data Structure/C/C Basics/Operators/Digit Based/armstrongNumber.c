#include <stdio.h>
void armstrongNumber(int n)
{
    int r, sum = 0;
    int a = n;
    
    while(n>0)
    {
        // This will run till first digit
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }
    if(a == sum)
    {
        printf("The given number is Armstrong");
    }
    else
    {
        printf("The given number is not Armstrong");
    }
    
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    armstrongNumber(n);
    
    return 0;
}