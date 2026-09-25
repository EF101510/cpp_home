#include <iostream>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        
        if (s.size() == 0)
        {
            return true;
        }
        if (t.size() == 0)
        {
            return false;
        }
        int ptr = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == s[ptr])
            {
                ptr++;
            }
        }
        if (ptr == s.size())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    string s = "abc";
    string t = "ahbgdc";
    Solution sol;
    bool ans = sol.isSubsequence(s, t);
    string ans_str = ans ? "true" : "false";
    cout << ans_str << endl;
}