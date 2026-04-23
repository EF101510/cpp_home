#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> map; // 公寓

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];       // 目前數字
            int need = target - num; // 差多少

            // 在公寓裡找到數字
            if (map.count(need))
            {
                return {map[need], i};
            }

            // if 沒找到 自己存進去
            map[num] = i;
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> num = {2, 8, 11, 15};
    int target = 19;

    vector<int> result = sol.twoSum(num, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

