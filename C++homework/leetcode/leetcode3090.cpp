#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    int maximumLengthSubstring(string s)
    {
        unordered_map<char, int> map;
        int left = 0;
        int best = 0;
        for (int right = 0; right < s.size(); right++)
        {
            if (map.find(s[right]) != map.end())
            {
                map[s[right]]++;
            }
            else
                map[s[right]] = 1;

            while (map[s[right]] > 2)
            {
                map[s[left]]--;
                left++;
            }
            best = max(right - left + 1, best);
        }
        return best;
    }
};

int main()
{
    string str = "aaaaa";
    Solution sol;
    int ans = sol.maximumLengthSubstring(str);
    cout << ans << endl;
}