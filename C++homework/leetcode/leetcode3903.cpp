#include <iostream>
using namespace std;

class Solution
{
public:
    int firstStableIndex(vector<int> &nums, int k)
    {
        vector<int> min(nums.size(), nums[nums.size() - 1]);
        int max = 0;
        for (int i = nums.size() - 2; i < nums.size(); i--)
        {
            if (nums[i] < min[i + 1])
            {
                min[i] = nums[i];
            }
            else
                min[i] = min[i + 1];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
            if (max - min[i] <= k)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> vec{3, 2, 1}; // 3
    Solution sol;
    int ans = sol.firstStableIndex(vec, 1);
    cout << ans << endl;
}