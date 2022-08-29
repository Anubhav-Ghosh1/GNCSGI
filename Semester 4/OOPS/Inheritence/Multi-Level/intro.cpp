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

class GermanShepherd: public Dog
{

};

int main()
{
    GermanShepherd g1;
    g1.speak();
return 0;
}