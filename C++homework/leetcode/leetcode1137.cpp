#include <iostream>
using namespace std;

class Solution
{
public:
    int tribonacci(int n)
    {

        int nums[n + 1];
        nums[0] = 0;
        nums[1] = 1;
        nums[2] = 1;

        if (n <= 2)
        {
            return nums[n];
        }

        for (int i = 3; i <= n; i++)
        {
            nums[i] = nums[i - 1] + nums[i - 2] + nums[i - 3];
        }
        return nums[n];
    }
};

int main()
{
    Solution sol;
    int ans = sol.tribonacci(4);
    cout << ans << endl;
}