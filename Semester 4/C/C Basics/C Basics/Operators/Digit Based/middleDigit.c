#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int a = n;
    int r;
    int count = 0;
    while (n>0)
    {
        r = n%10;
        count++;
        n = n/10;
    }
    int digit;
    count = count/2;
    if(count%2==0)
    {
        digit = count;
    }
    else
    {
        digit = count + 1;
    }
    for (int i = 0; i < digit; i++)
    {
        r = a%10;
        a = a/10;
    }
    printf("%d",r);
    
    

    
}