#include <iostream>
using namespace std;
int sqrt(int arr[],int n,int key)
{
    int s = 0;
    int e = n-1;
    int ans = 0;
    int mid = s + (e-s)/2;
    int square = mid * mid;
    while (s<e)
    {
        if ((mid * mid)==key)
        {
            ans = mid;
            return ans;
        }
        else if ((mid * mid)>key)
        {
            e = mid - 1;
        }
        else if((mid * mid)<key)
        {
            ans = mid;
            s  = mid + 1;
        }
        
        mid = s + (e-s)/2;
        
    }
    return ans;
    
}
int main()
{
   int n = 36;
   int array[n];
   for (int i = 0; i < n; i++)
   {
      array[i] = i;
   }
   cout << endl;
   cout << sqrt(array,n,n);
   
return 0;
}
