#include <stdio.h>
int main()
{
    // Vowel or consonant
    char ch;
    printf("\nEnter character: ");
    scanf("%c",&ch);
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("\nIs a vowel");
    }
    else
    {
        printf("\nIs a consonant");
    }
    return 0;
}