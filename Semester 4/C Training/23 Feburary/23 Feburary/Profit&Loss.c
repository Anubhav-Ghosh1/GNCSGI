#include <stdio.h>
int main()
{
    int cp, sp;
    printf("\nEnter cp: ");
    scanf("%d", &cp);
    printf("\nEnter sp: ");
    scanf("%d", &sp);
    if (cp > sp)
    {
        float percent = (((float)cp - sp) / cp) * 100;
        printf("\nLoss -%.0f%%", percent);
    }
    else if (cp < sp)
    {
        float percent = (((float)sp - cp) / cp) * 100;
        printf("\nProfit %.0f%%", percent);
    }
    else
    {
        printf("\nNo profit loss ");
    }
    return 0;
}