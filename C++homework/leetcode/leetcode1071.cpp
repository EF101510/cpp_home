#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        // ------ 001 ------
        unordered_map<char, int> map;
        int step;
        if (str1.size() < str2.size())
        {
            step = str1.size();
        }
        else
            step = str2.size();
        // ------ 002 ------
        for (int i = 0; i < step; i++)
        {
            if (str1[i] == str2[i])
            {
                if (map.find(str1[i]) != map.end())
                {
                    map[str1[i]] += 1;
                }
                else
                    map[str1[i]] = 1;
            }
            else
                return "";
        }
    }
};

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";
    Solution sol;
    sol.gcdOfStrings(str1,str2);
}