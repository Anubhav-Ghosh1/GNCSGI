#include <iostream>
using namespace std;

class friendFunction
{
private:
    int a, b, m;

public:
    void getData()
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    friend void max(friendFunction t);
};
void max(friendFunction t)
{
    if (t.a > t.b)
    {
        t.m = t.a;
    }
    else
    {
        t.m = t.b;
    }
    cout << "Maximum value is " << t.m << endl;
}

int main()
{
    friendFunction a;
    a.getData();
    max(a);
    return 0;
}