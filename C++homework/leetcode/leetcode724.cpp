#include <iostream>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int arr[nums.size() + 1];
        arr[0] = 0;

        for (int i = 0; i < nums.size(); i++) // 全部加總
        {
            arr[i + 1] = nums[i] + arr[i];
        }
        int total = arr[nums.size()];
        for (int i = 1; i < nums.size() + 1; i++)
        {
            if (arr[i - 1] == total - arr[i])
            {
                return i - 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> vec = {2, 1, -1}; 
    Solution sol;
    int ans = sol.pivotIndex(vec);
    cout << ans << endl;
}