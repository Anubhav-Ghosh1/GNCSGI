#include <iostream>
using namespace std;
class human
{
    public:
    string name;
    int height; 
    int age;

    public:
    void getinfo()
    {
        cout << "Enter name" << " :";
        cin >> name;
        cout << "Enter age" << " :";
        cin >> age;
        cout << "Enter height" << " :";
        cin >> height;
    }
    void showinfo()
    {
        cout << "Entered name" << " :" << name;
        cout << "Entered age" << " :" << age;
        cout << "Entered height" << " :" << height;

    }
        
};
class baby :public human
{
    
    void names(string name)
    {
        cout << "My name is " << name;
    }
    
    void walking()
    {
        cout << "I can walk ";
    }
    void eating()
    {
        cout << "I can eat ";
    }
    
};
int main()
{
    baby s1;
    s1.getinfo();
    
return 0;
}