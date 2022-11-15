#include <iostream>
using namespace std;
class Member
{
    private :
    string name;
    int age;
    
public:
    int getData(string name,int age)
    {
        cout << "Entered name: " << name << endl;
        cout << "Entered age: " << age << endl;
       
        cout << endl;
    }

    int showData()
    {
      
        
    }

};

int main()
{
  Member em1;
  em1.getData("Name",19);
 
return 0;
}
