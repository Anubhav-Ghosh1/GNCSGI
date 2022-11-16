#include <iostream>
using namespace std;
class Human
{
private:
    string name;

public:
    int age;
    Human(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    // copy constructor
    Human(Human& temp)
    {
        this-> age = temp.age;
        this->name = temp.name;
    }


    void print()
    {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void setName(string nameInput)
    {
        name = nameInput;
    }
    void setAge(int ageInput)
    {
        age = ageInput;
    }
};
int main()
{
    Human h1(10,"Name");
    h1.print();
    Human h2(h1);
    // Copy constructor
    h2.print();
    return 0;
}