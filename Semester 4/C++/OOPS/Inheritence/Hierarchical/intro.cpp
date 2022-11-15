#include <iostream>
using namespace std;

class A
{
public:
    void function1()
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
public:
    void function2()
    {
        cout << "Class B" << endl;
    }
};

class C : public A
{
public:
    void function3()
    {
        cout << "Class C" << endl;
    }
};

int main()
{
    A object1;
    object1.function1();

    cout << endl;

    B object2;
    object2.function1();
    object2.function2();

    cout << endl;

    C object3;
    object3.function1();
    object3.function3();

    return 0;
}