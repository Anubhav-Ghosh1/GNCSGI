#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter number: ");
    scanf("%d",&n);
    if(n%2 == 0)
    printf("\nEven");
    else
    printf("\nOdd");
    
    return 0;
}