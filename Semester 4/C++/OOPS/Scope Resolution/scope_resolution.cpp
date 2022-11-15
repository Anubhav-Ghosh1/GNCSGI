#include <iostream>
using namespace std;
int x = 100;
int main()
{
	int x = 10;
	cout << "Local-> " << x << endl;
	cout << "Global-> " << ::x << endl;
	return 0;
}
