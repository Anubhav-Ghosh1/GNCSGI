#include <stdio.h> 
void numberOfFactorial(int n)
{
        int count = 0;
        int r;
        for (int i = n; i>0 ; i--)
        {
            if(n%i==0)
            {
                count++;
              //  printf("%d ",i);
            }

        }
   printf("%d ",count);            
} 
int main()  
{  
    int n;
    printf("Enter a number: ");  
    scanf("%d",&n);  
    numberOfFactorial(n);
    // printf("Number of Factorial are: %d",ans);  
    
    return 0;  
}  
