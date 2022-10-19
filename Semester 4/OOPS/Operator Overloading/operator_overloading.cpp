#include <iostream>
using namespace std;

class A
{
public:
  int a;
  int showData();
  int getData();
  friend A operator-(A b);
};

int A ::showData()
{
  return a;
}
int A ::getData()
{
  cout << "Enter value of a: ";
  cin >> a;
}
A operator-(A b)
{
  b.a = -(b.a);
  return b;
}

int main()
{
  A a;
  a.getData();
  a = -a;
  cout << "Value after performing opertor overloading " << a.showData() << endl;
  return 0;
}