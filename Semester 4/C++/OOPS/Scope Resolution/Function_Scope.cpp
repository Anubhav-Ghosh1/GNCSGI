#include <iostream>
using namespace std;
class Employee
{
	public:
		int age;
		string name;
		int salary;
		
	int getdata()
	{
	int age,salary;
	string name;
	cout << "Enter name " << endl;
	cin >> name; /Taking name input/
	cout << "Enter age " << endl;
	cin >> age; /Taking age as an input/
	cout << "Enter salary " << endl;
	cin >> salary; /Taking salary input/
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
	int n;
	cout << "Enter number of Employee's whose information you want to store -> ";
	cin >> n;
	
	Employee e[n]; /Initlizing Object/
	 /* Passing value in the object*/

	for(int i = 0;i<n;i++)
	{
		cout << "Enter details of the employee " << i + 1 << " " << endl;
		e[i].getdata();
		cout << endl;
	}
	for(int i = 0;i<n;i++)
	{
		cout << "Showing details of the employee " << i + 1 << " ";
		
		e[i].showdata();
		cout << endl;
	}
return 0;
}
