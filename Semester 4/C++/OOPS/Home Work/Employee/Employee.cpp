#include <iostream>
using namespace std;
class Employee
{
    public:
    string name;
    int age;
    int id;
    int salary;

    int getData()
    {
        cout << "Enter name of employee: ";
        cin >> name;
        
        cout << "Enter age of employee: ";
        cin >> age;
        
        cout << "Enter employee id number: ";
        cin >> id;
        
        cout << "Enter salary of employee: ";
        cin >> salary;
        cout << endl;
    }

    int showData()
    {
        cout << "Entered name of employee: " << name << endl;
        cout << "Entered age of employee: " << age << endl;
        cout << "Entered employee id: " << id << endl;
        cout << "Entered salary of employee: " << salary << endl;
    }

};

int main()
{
  Employee em1;
  em1.getData();
  em1.showData();
return 0;
}
