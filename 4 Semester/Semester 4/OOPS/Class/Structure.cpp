#include <iostream>
using namespace std;
struct student
{
    string name;
    int age;
} s;

int main()
{

    cin >> s.age;
    cin >> s.name;
    cout << "Entered name is " << s.name << endl;
    cout << "Entered age is " << s.age << endl;

    return 0;
}
