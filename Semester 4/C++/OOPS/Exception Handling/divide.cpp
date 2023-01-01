#include <iostream>
using namespace std;
int main()
{

    try
    {
        float a, b, c;
        cout << "Enter value of a and b: ";
        cin >> a >> b;
        if (b != 0)
        {
            cout << a << " / " << b << " is " << a / b << endl;
        }
        else
        {
            throw(b);
        }
    }
    catch (float b)
    {
        cout << "Exception caught: Divided by " << b;
    }

    return 0;
}