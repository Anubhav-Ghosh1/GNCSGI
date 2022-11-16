#include <iostream>
using namespace std;

class staticClass
{
public:
    static int count;
    string name;

    void setData(string name)
    {
        this->name = name;
        count++;
    }

    void getData()
    {
        cout << "Name of the user is " << name << endl;
    }
    static void getCount()
    {
        cout << "Value of count is " << count << endl;
    }
};

// To define it as an a static member
int staticClass ::count;

int main()
{
    staticClass a, b, c;
    a.setData("A");
    b.setData("B");
    c.setData("C");
    c.getData();
    c.getCount();
    return 0;
}