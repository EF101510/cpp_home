#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 8, 11, 15};
    int target = 19;
    vector<int> result = sol.twoSum(nums,target);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}