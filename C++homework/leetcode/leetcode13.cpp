#include <iostream>
#include <unordered_map>
using namespace std;
// I             1
//  V             5
//  X             10
//  L             50
//  C             100
//  D             500
//  M             1000
class Solution
{
public:
    int romanToInt(string s)
    {
        const unordered_map<char, int> map{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            int val = map.at(c);
            int next = 0;

            if (i + 1 < s.size())
            {
                char next_char = s[i + 1]; // 會拿出字符 'I' 'V'....
                next = map.at(next_char);
            }
            if (val < next)
                ans -= val;
            else
                ans += val;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    int result = sol.romanToInt("MMCCCXLV");
    cout << result << endl;
}
