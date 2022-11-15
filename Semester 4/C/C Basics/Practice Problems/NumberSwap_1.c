#include <stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter two number: ");
   scanf("%d%d", &a,&b);
   printf("Normal %d %d",a,b);
   
   temp = a;
   a = b;
   b = temp;

   printf(" Swapped %d %d",a,b);
return 0;
}