#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int maxVowels(string s, int k)
    {
        unordered_set<char> set{'a', 'e', 'i', 'o', 'u'};
        int curr = 0;
        int best = 0;

        for (int i = 0; i < k; i++)
        {
            if (set.find(s[i]) != set.end())
            {
                curr++;
            }
        }
        best = curr;
        for (int i = k; i < s.size(); i++)
        {
            if (set.find(s[i]) != set.end())
            {
                curr++;
            }
            if (set.find(s[i - k]) != set.end())
            {
                curr--;
            }
            best = max(curr, best);
        }
        return best;
    }
};

int main()
{
    string s = "aaiiiihh";
    Solution sol;
    int ans = sol.maxVowels(s, 6);
    cout << ans << endl;
}