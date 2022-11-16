#include <iostream>
using namespace std;

class constructor
{
public:
    int data;
    constructor(int data)
    {
        this->data = data;
    }
    void showData()
    {
        cout << "Value of data is " << data << endl;
    }
};

int main()
{
    constructor a(5);
    a.showData();
    return 0;
}