#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {

        unordered_map<int, int> map{};

        for (int i = 0; i < nums.size(); i++)
        {
            auto it = map.find(nums[i]);
            if (it != map.end())
            {
                if (k >= (i - it->second))
                {
                    return true;
                }
            }
            map[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> nums{1,2,3,1,2,3};
    bool ans = sol.containsNearbyDuplicate(nums, 2);
    string str = ans ? "true" : "false";
    cout << str << endl;
}