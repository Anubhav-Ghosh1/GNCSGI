#include <iostream>
using namespace std;
class Animal
{
public:
    string name;
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    void showData()
    {
        cout << "Name is " << name << endl;
        cout << "My Age is " << age << endl;
        cout << "My Weight is " << weight << endl;
    }
};

class GermanShepherd : public Animal, public Dog
{
};

class A : public GermanShepherd
{
public:
    void function1()
    {
        cout << "Class A " << endl;
    }
};

int main()
{
    GermanShepherd g1;
    A object1;
    object1.showData();
    object1.function1();
    return 0;
}