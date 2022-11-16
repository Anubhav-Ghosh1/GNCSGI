#include <iostream>
using namespace std;

class A
{
public:
    virtual void Display()
    {
        cout << "Base Class" << endl;
    }
};
class B: public A
{
public:
    void Display()
    {
        cout << "Derived Class" << endl;
    }    
};

int main()
{
    A * ptr;
    A * ptr1;
    A a;
    B b;
    ptr = &b;
    ptr->Display();
    ptr1 = &a;
    ptr1 ->Display();
return 0;
}