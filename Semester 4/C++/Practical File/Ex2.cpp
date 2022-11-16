#include <iostream>
using namespace std;

class scope
{
private:
    int data;

public:
    int showData(int i);
};
// scope resolution operator
int scope ::showData(int i)
{
    data = i;
    cout << "Value of data is " << data << endl;
}

int main()
{
    scope a;
    a.showData(5);
    return 0;
}