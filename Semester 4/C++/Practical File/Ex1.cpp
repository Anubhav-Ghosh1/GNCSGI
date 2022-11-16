#include <iostream>
using namespace std;

class A
{
    // Class
private:
    int data = 10;

public:
    int showData()
    {
        cout << "Value of data is " << data << endl;
    }
};

int main()
{
    A a;
    // Object
    a.showData();
    return 0;
}