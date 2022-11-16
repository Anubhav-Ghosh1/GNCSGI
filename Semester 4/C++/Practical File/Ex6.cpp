#include <iostream>
using namespace std;

class constructor
{
public:
    int data;
    ~constructor()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    constructor a;
    return 0;
}