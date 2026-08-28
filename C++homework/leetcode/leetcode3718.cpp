#include <iostream>
using namespace std;

class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int divisor = 1;
        int num = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (num == nums[i])
            {
                continue;
            }

            num = nums[i];
            if (num % k == 0) // 可被整除
            {
                if (num / k == divisor)
                {
                    divisor++;
                }
                else
                    break;
            }
        }
        return divisor * k;
    }
};

int main()
{
    vector<int> vec = {2,4,4,4,4,4,4,4,8};
    Solution sol;
    int ans = sol.missingMultiple(vec, 2);
    cout << ans << endl;
}