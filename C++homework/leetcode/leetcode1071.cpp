#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }
        int int_gcd = gcd(str1.size(), str2.size());
        return str1.substr(0, int_gcd);
    }

    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
};

int main()
{
    string str1 = "";
    string str2 = "ABC";
    Solution sol;
    cout << sol.gcdOfStrings(str1, str2) << endl;
}