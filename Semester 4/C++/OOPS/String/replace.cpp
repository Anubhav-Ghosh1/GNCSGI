#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1 = "Diploma in Computer Engineering";
    string str2 = "Information Technology";
    int found = -1;
    string computerWord = "Computer";
    int a;
    do
    {
        // Find will return the index of th character where it will find the word
        found = str1.find(computerWord, found + 1);
        if (found != -1)
        {
            // We will save the string till the word to delete and after the string the word has been deleted
            str1 = str1.substr(0, found) + str1.substr(found + computerWord.length(), str1.length());
            // saving the value of the found to insert the word
            a = found;
        }
    } while (found != -1);
    cout << a << endl;
    str1.insert(a, str2);

    cout << str1 << endl;
    return 0;
}