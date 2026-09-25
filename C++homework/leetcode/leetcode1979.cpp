#include <iostream>
using namespace std;

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int small = 1001;
        int big = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= small)
            {
                small = nums[i];
            }
            if (nums[i] >= big)
            {
                big = nums[i];
            }
        }
        return gcd(small, big);
    }
    int gcd(int s, int b)
    {
        while (b != 0)
        {
            int temp = s % b;
            s = b;
            b = temp;
        }
        return s;
    }
};

int main()
{
    vector<int> vec{2, 6, 5, 10, 9};
    Solution sol;
    int ans = sol.findGCD(vec);
    cout << ans << endl;
}
