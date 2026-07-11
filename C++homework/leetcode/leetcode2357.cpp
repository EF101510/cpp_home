#include <iostream>
#include<set>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int ans = 0;
        while (true)
        {
            int min = 101;
            for (int i = 0; i < nums.size(); i++)
            {
                if (min > nums[i] && nums[i] != 0)
                {
                    min = nums[i];
                }
            }
            if (min == 101)
            {
                break;
            }

            for (int i = 0; i < nums.size(); i++)
            {
                int result = nums[i] - min;
                nums[i] = result < 0 ? 0 : result;
            }
            ans++;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums{1, 5, 0, 3, 5};
    Solution sol;
    int ans = sol.minimumOperations(nums);
    cout << ans << endl;
}