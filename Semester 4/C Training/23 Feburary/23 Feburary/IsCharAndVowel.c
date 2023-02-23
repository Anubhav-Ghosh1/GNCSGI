#include <stdio.h>
int main()
{
    // Is a character or not
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
        {
            printf("\nis a character");
            printf("\nIs a vowel");
        }
        else
        {
            printf("\nis a character");
            printf("\nIs a consonant");
        }
        /* code */
    }
    else
    {
        printf("\nis not a character");
    }

    return 0;
}