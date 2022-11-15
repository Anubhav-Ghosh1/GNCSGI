#include <stdio.h>

struct structure
{
    int a,b;
};

struct employee
{
    char name[20];
    int id;
};

int main()
{
    // struct structure s;
    // s.a = 10;
    struct employee e;
    printf("Enter name: ");
    gets(e.name);
    printf("%s",e.name);
    return 0;
}