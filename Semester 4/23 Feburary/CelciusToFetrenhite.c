#include <stdio.h>
int main()
{
    int option;
    printf("\nEnter 1 to convert C To F\nEnter 2 to convert F To C\n");
    scanf("%d",&option);
    if(option == 1)
    {
        float c;
        printf("\nEnter temperature in C: ");
        scanf("%f",&c);
        float f = (9*(c/5)) + 32;
        printf("\nTemperature in F: %f ",f);
    }
    else 
    {
        float f;
        printf("\nEnter temperature in F: ");
        scanf("%f",&f);
        float c = ((f-32)*5)/9;
        printf("\nTemperature in C: %f ",c);

    }
    return 0;
}