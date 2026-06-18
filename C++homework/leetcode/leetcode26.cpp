#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int slow = 1;
        for (int fast = 1; fast < nums.size(); fast++)
        {
            if (nums[fast] != nums[fast - 1])
            {
                nums[slow] = nums[fast];
                slow++;
            }
        
        }
        return slow;
    }
};

int main()
{
    vector<int> nums({1,2,2,2,3,4,4,5,5});
    Solution sol;
    sol.removeDuplicates(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}