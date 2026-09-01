#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1{};
        unordered_set<int> set2{};
        for (int i = 0; i < nums1.size(); i++)
        {
            set1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            set2.insert(nums2[i]);
        }
        // ------ 1 ------
        vector<int> vec1;
        vector<int> vec2;
        for (int num : set1)
        {
            if (set2.find(num) == set2.end())
            {
                vec1.push_back(num);
            }
        }
        for (int num : set2)
        {
            if (set1.find(num) == set1.end())
            {
                vec2.push_back(num);
            }
        }
        // ------- 2 -------
        vector<vector<int>> vec = {vec1, vec2};
        return vec;
    }
};

int main()
{
    vector<int> vector1 = {1, 2, 3};
    vector<int> vector2 = {2, 4, 6};
    Solution sol;
    vector<vector<int>> ans = sol.findDifference(vector1, vector2);
    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        if (i != 0)
        {
            cout << ",";
        }
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            if (j != 0)
            {
                cout << ",";
            }
            cout << ans[i][j];
        }
        cout << "]";
    }
    cout << "]" << endl;
}