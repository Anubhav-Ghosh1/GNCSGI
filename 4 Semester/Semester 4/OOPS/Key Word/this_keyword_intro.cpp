#include <iostream>
using namespace std;
class Employee
{
	public:
		int age;
		string name;
		int salary;
		
	int getdata(int age,int salary,string name)
	{
		this->age = age;
		this->name = name;
		this->salary = salary;
	}
	int showdata();
	
};
int Employee :: showdata()
{
cout << "Name is " << name << endl;
cout << "Age is " << age << endl;
cout << "Salary is " << salary << endl;
}
int main()
{
	Employee e1; /Initlizing Object/
	int age,salary;
	string name;
	cout << "Enter name " << endl;
	cin >> name; /Taking name input/
	cout << "Enter age " << endl;
	cin >> age; /Taking age as an input/
	cout << "Enter salary " << endl;
	cin >> salary; /Taking salary input/
	
	e1.getdata(age,salary,name); /* Passing value in the object*/
	e1.showdata();
return 0;
}
