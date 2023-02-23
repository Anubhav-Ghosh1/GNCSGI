// -b +- (sqrt b2 -4ac)/2a
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int d = ((b*b)-(4*a*c))/(2*a);
    if(d>0)
    {
        printf("\n-%d + %d\n",b,sqrt(d));
        printf("+%d + %d\n",b,sqrt(d));
    }
    else if(d == 0)
    {
        float answer = (b/(2*a));
        printf("\n-%f",answer);    
    }
    else if(d < 0)
    {

    }
    return 0;
}