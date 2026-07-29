#include <iostream>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        // ------- 1 -------
        int step;
        if (word1.size() > word2.size())
        {
            step = word2.size();
        }
        else
            step = word1.size();
        // ------- 2 -------
        string ans = "";
        for (int i = 0; i < step; i++)
        {
            ans += word1[i];
            ans += word2[i];
        }
        // ------- 3 -------
        if (word1.size() > word2.size())
        {
            ans += word1.substr(step);
        }
        else
            ans += word2.substr(step);
        return ans;
    }
};

int main()
{
    string word1 = "abc";
    string word2 = "pqr";
    Solution sol;
    string ans = sol.mergeAlternately(word1, word2);
    cout << ans << endl;
}