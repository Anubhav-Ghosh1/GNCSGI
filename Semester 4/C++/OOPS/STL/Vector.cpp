#include <iostream>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;
int size(vector<int>a)
{
   return a.size();
}

void printVector(vector<int>a)
{
 for (int i = 0; i < a.size(); i++)
 {
    /* code */
     cout<<a[i] <<" ";
 }
}


void reverse(vector<int>a)
{
 for (int i = 0; i < a.size()/2; i++)
 {
    /* code */
    swap(a[a.size()-i-1],a[i]);
 }
    printVector(a);
 
}

void sortVector(vector<int>a)
{
   sort(a.begin(),a.end());
   printVector(a);
}
void vectorCapacity(vector<int>a)
{
 cout<<a.capacity();
}
int main()
{
vector<int>a;
a.push_back(33);
a.push_back(1);
a.push_back(54);
a.push_back(56);
a.push_back(23);
a.push_back(645);
 reverse(a);
 cout<<endl;
sortVector(a);
string b = "b";
string c = "b";
   cout << endl << b.compare(c);
}