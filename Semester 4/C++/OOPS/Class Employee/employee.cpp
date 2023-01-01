#include <iostream>
using namespace std;

class Employee
{
    public:
    string employee_Name;
    int employee_id;
    int basicpay;
    Employee()
    {
        putData();
    }
    int getData()
    {
        cout << "Employee name: " << employee_Name << endl;
        cout << "Employee id: " << employee_id << endl;
    }
    int putData()
    {
        cout << "Enter employee name: ";
        cin >> employee_Name;
        cout << "Enter employee id: ";
        cin >> employee_id;
        cout << "Salary: ";
        cin >> basicpay;
    }
};
class Salary :public Employee
{
    public:
        Salary()
        {
            Employee a[10];
            for (int i = 0; i < 3; i++)
            {
                
            
        }
        void calculateSalary(Employee& a)
        {
            int da = (a.basicpay*30)/100;
            double hra = 0.4;
            cout << "DA is " << da << endl;
            cout << "HRA is " << (a.basicpay*40)/100 << endl;
            cout << "Salary is " << a.basicpay + (1 + hra + da) << endl;
        }
};

int main()
{
    
    Salary s;
return 0;
}