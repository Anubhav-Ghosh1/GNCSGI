#include <iostream>
using namespace std;
class Constructors
{
    public:
/* What Does Constructor Mean? A constructor is a special method of a class or structure 
in object-oriented programming that initializes a newly created object of that type. 
Whenever an object is created, the constructor is called automatically. */
  Constructors()
    {
       cout << "Default Constructor Called" <<endl;
    }
};
int main()
{
  Constructors c1; /*We created an object of the class now constructor will be called*/

return 0;
}
