#include <stdio.h>
void reverseNumber(int n)
{
    int r, sum = 0;
    int a;
    while(n>0)
    {
       
        r = n % 10;
        printf("%d",r);
        n = n / 10;

    }
    
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    reverseNumber(n);
   
    return 0;
}