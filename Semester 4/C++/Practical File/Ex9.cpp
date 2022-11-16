#include <iostream>
using namespace std;

class friendClass
{
private:
    int data;
public:
    friendClass()
    {
        data = 10;
    }
    friend class B;
};

class B
{
    public:
        int display(friendClass &t)
        {
            cout << "The value of data is " << t.data << endl;
        }
};

int main()
{
    friendClass a;
    B b;
    b.display(a);
  return 0;
}