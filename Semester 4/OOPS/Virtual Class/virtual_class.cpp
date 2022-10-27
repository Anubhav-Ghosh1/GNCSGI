#include <iostream>
using namespace std;

class Base_Class
{
public:
    void Show()
    {
        cout << "Base Class" << endl;
    }
};
class Derived_Class_1 :public virtual Base_Class
{

};
class Derived_Class_2 :public virtual Base_Class
{

};
class Derived_Class_3 :public Derived_Class_1, public Derived_Class_2
{

};
int main()
{
    Derived_Class_3 a;
    a.Show();
return 0;
}