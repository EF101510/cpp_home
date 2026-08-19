#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        int left = 0;
        int best = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            if (map.find(nums[right]) != map.end())
            {
                map[nums[right]]++;
            }
            else
                map[nums[right]] = 1;

            while (map[nums[right]] > 2)
            {
                map[nums[left]]--;
                left++;
            }
            best = max(right - left + 1, best);
        }
        return best;
    }
};