#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        int nums_size = nums.size();
        int a;
        int b;
        a = nums[0] * nums[nums_size - 1] * nums[nums_size - 2];
        b = nums[0] * nums[1] * nums[2];
        return max(a, b);
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    Solution sol;
    int ans = sol.maximumProduct(nums);
    cout << ans << endl;
}