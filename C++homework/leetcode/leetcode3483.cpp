#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int totalNumbers(vector<int> &digits)
    {
        unordered_set<int> set{};
        for (int i = 0; i < digits.size(); i++) // 百
        {
            if (digits[i] == 0)
            {
                continue;
            }

            for (int j = 0; j < digits.size(); j++) // 十
            {
                if (i == j)
                {
                    continue;
                }
                for (int k = 0; k < digits.size(); k++) // 個
                {
                    if (i == k || j == k)
                    {
                        continue;
                    }
                    int nums = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (nums % 2 == 0)
                    {
                        set.insert(nums);
                    }
                }
            }
        }
        return set.size();
    }
};

int main()
{
    vector<int> vec{0, 2, 2};
    Solution sol;
    int ans = sol.totalNumbers(vec);
    cout << ans << endl;
}