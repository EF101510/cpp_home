#include <iostream>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n < 3)
            return n;

        int nums[n + 1];
        nums[0] = 0;
        nums[1] = 1;
        nums[2] = 2;

        for (int i = 3; i <= n; i++)
        {
            nums[i] = nums[i - 1] + nums[i - 2];
        }
        return nums[n];
    }
};

int main()
{
    Solution sol;
    int nn = sol.climbStairs(3);

    cout << nn << endl;
}