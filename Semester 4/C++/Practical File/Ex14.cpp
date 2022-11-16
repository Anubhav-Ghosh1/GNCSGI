#include <iostream>
using namespace std;

class functionOverloading
{
public:
    int max(int a, int b)
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    double max(double a, double b)
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};

int main()
{
    functionOverloading a;
    cout << a.max(1, 2) << endl;
    cout << a.max(2.2, 2.6) << endl;
    return 0;
}