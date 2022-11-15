#include <iostream>
using namespace std;

class A
{
    public:
    int a;
    int setData();
    int getData();
    friend A operator+ (A b);
};
int A :: setData()
{
    cout << "Enter value of a ";
    cin >> a;
}
int A :: getData()
{
    return a;
}
A operator+(A b,A c)
{
    A temp;
    temp.a = b.a + c.a;
    return temp;
}
int main()
{
  A obj1,obj2,obj3;
  obj1.setData();
  obj2.setData();
  obj3 = obj1 + obj2;
  cout << "Value of a + b is " << obj3.getData() << endl;
  return 0;
}