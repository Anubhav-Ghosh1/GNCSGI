#include <iostream>
using namespace std;

class A
{
public:
    virtual string getName() = 0;
};
class B : public A
{
public:
    string getName()
    {
        return "Abstract";
    }
};
class C : public A
{
public:
    string getName()
    {
        return "Class";
    }
};
int main()
{
    A *ptr;
    B b;
    C c;
    ptr = &b;
    cout << ptr->getName() << " ";
    ptr = &c;
    cout << ptr->getName() << endl;
    return 0;
}