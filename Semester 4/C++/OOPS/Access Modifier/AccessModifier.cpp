#include <iostream>
using namespace std;
class Member
{
    private :
    string name;
    int age;
    
public:
    int getData()
    {
        cout << "Enter name: ";
        cin >> name;
        
        cout << "Enter age: ";
        cin >> age;
        
       
        cout << endl;
    }

    int showData()
    {
        cout << "Entered name: " << name << endl;
        cout << "Entered age: " << age << endl;
        
    }

};

int main()
{
  Member em1;
  em1.getData();
  em1.showData();
return 0;
}
