#include <iostream>
#include <map>
#include <set>

using namespace std;
class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        set<int> myset;
        unordered_map<int, int> mymap;
        vector<int> ans{};
        int rank = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            myset.insert(arr[i]);
        }

        for (auto &s : myset)
        {
            mymap[s] = rank;
            rank++;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            auto it = mymap.find(arr[i]);
            if (it != mymap.end())
            {
                int r = it->second;
                ans.insert(ans.end(), r);
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums {37,12,28,9,100,56,80,5,12};
    vector<int> ranks = sol.arrayRankTransform(nums);
    for (int i = 0; i < ranks.size(); i++)
    {
        cout<<ranks[i]<<" ";
    }
    cout<<endl;
    
}