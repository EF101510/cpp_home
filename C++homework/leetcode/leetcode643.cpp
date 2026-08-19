#include <iostream>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double avg = 0;
        double sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        avg = sum / k;
        for (int i = k; i < nums.size(); i++)
        {
            sum = sum + nums[i] - nums[i - k];
            double temp = sum / k;
            avg = max(temp, avg);
        }
        return avg;
    }
};

int main()
{
    vector<int> nums = {5};
    Solution sol;
    double ans = sol.findMaxAverage(nums, 1);
    cout << ans << endl;
}