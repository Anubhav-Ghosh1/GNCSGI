#include <stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter two number: ");
   scanf("%d%d", &a,&b);
   printf("Normal %d %d",a,b);
   
  a = a + b;
  b = a - b;
  a = a - b;


   printf(" Swapped %d %d",a,b);
return 0;
}