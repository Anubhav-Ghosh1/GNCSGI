#include <stdio.h>
int main()
{
    // Is a character or not
    char ch;
    printf("\nEnter a character: ");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\nis a character");
        /* code */
    }
    else
    {
        printf("\nis not a character");
    }
    
    return 0;
}