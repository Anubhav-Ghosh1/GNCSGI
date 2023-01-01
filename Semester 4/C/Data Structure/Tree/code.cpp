#include <iostream>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case 'I':
                if (s[i + 1] == 'V' || s[i + 1] == 'X')
                    result -= 1;
                else
                    result += 1;
                break;

            case 'V':
                result += 5;
                break;

            case 'X':
                if (s[i + 1] == 'C' || s[i + 1] == 'L')
                    result -= 10;
                else
                    result += 10;
                break;

            case 'L':
                result += 50;
                break;

            case 'C':
                if (s[i + 1] == 'D' || s[i + 1] == 'M')
                    result -= 100;
                else
                    result += 100;
                break;

            case 'D':
                result += 500;
                break;

            case 'M':
                result += 1000;
                break;

            default:
                break;
            }
        }

        return result;
    }
};
int main()
{
    Solution s1;
    cout << s1.romanToInt("IX");
    return 0;
}