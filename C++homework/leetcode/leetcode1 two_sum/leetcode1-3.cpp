#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> map{};
        vector<int> vec(2, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = i;
        }
        for (auto entry : map)
        {

            int dis = target - entry.first;
            if (map.find(dis) != map.end())
            {
                vec.push_back(entry.second , map[dis])
            }
        }
    }
};