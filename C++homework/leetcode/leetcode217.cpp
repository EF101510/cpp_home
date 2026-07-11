#include <iostream>
#include <map>
using namespace std;

// class Solution
// {
// public:
//     bool containsDuplicate(vector<int> &nums)
//     {
//         for (int i = 0; i < nums.size(); i++) // 慢
//         {
//             for (int j = i + 1; j < nums.size(); j++) // 快
//             {
//                 if (nums[j] == nums[i])
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };


class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
       unordered_map<int,int> map{};
       
       map[nums[0]]=1;
       for (int i = 1; i < nums.size(); i++)
       {
            auto iter = map.find(nums[i]);
            if (iter == map.end())
            {
                map[nums[i]] = 1;
            } else return true;
            
       }
       return false;
    }
};
int main()
{
    vector<int> nums{1, 2, 3, 4};
    Solution sol;
    bool ans = sol.containsDuplicate(nums);
    cout << (ans ? "true" : "false") << endl;
}