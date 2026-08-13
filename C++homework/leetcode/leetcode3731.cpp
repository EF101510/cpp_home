#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        vector<int> out;
        sort(nums.begin(), nums.end());
        int first = nums[0];
        int end = nums[nums.size() - 1];
        int j = 1;

        for (int i = 1; i < end - first; i++)
        {
            if (i + first != nums[j])
            {
                out.push_back(i + first);
            }
            else
                j++;
        }
        return out;
    }
};

int main()
{
    vector<int> input = {7,8,6,9};
    Solution sol;
    vector<int> output = sol.findMissingElements(input);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
}